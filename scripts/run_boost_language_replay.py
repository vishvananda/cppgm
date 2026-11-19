#!/usr/bin/env python3
"""Replay the Boost.Build projects and tests skipped for language versions."""

import argparse
from collections import Counter
import json
import os
from pathlib import Path
import re
import shlex
import shutil
import signal
import subprocess
import tarfile

import boost_ci
from upstream_cxx_editions import DIALECTS
from upstream_dg_proxy import write_json


def validate_inventory(inventory):
    boost_ci.require(inventory['schema'] == 1 and inventory['boost'] == '1.92.0', 'unknown Boost replay inventory')
    projects = inventory['projects']
    groups = inventory['test_groups']
    names = {group['project'] for group in projects}
    targets = [target for group in groups for target in group['targets']]
    boost_ci.require(len(projects) == len(names) == 30 and len(targets) == len(set(targets)) == 972,
                     'incomplete or duplicate language-exclusion inventory')
    for group in [*projects, *groups]:
        project = group['project']
        boost_ci.require(re.fullmatch(r'libs/[A-Za-z0-9_/]+', project) and group['edition'] in (14, 17, 20),
                         'invalid project or edition')
        if 'replay_edition' in group:
            boost_ci.require(group['replay_edition'] in (14, 17, 20) and
                             group['replay_edition'] >= group['edition'] and group.get('replay_reason'),
                             'invalid replay edition override')
        inactive_tests = group.get('inactive_tests', {})
        required = {*group.get('targets', []), *group.get('required_tests', [])}
        later = group.get('later_tests', {})
        later_targets = [target for targets in later.values() for target in targets]
        if inactive_tests:
            boost_ci.require(group.get('kind') == 'test' and not group.get('targets') and
                             all(isinstance(reason, str) and reason for reason in inactive_tests.values()) and
                             required.isdisjoint(inactive_tests), 'invalid registered test exclusions')
        if later:
            boost_ci.require(group.get('kind') == 'test' and not group.get('targets') and
                             all(edition in {'17', '20'} and int(edition) > group.get('replay_edition', group['edition'])
                                 and targets for edition, targets in later.items()) and
                             len(later_targets) == len(set(later_targets)) and
                             set(later_targets).isdisjoint(required | inactive_tests.keys()),
                             'invalid later-edition test variants')
        for target in required | inactive_tests.keys() | set(later_targets):
            boost_ci.require(re.fullmatch(r'libs/[A-Za-z0-9_/]+//[^/\s]+\.test', target) and
                             target.split('//')[0].startswith(project), 'invalid test declaration: ' + target)
        if group.get('b2_aliases'):
            boost_ci.require(group.get('kind') == 'test' and not group.get('targets') and
                             all(re.fullmatch(r'[A-Za-z0-9_]+', alias) for alias in group['b2_aliases']),
                             'invalid supplementary B2 aliases')
        boost_ci.require(all(p in {'link=shared'} for p in group.get('b2_properties', [])),
                         'unreviewed project-specific B2 property')
        if 'shared_python_runtime' in group:
            reason = group['shared_python_runtime']
            boost_ci.require(isinstance(reason, str) and reason, 'shared Python runtime needs a recorded reason')
        if 'python39' in group:
            boost_ci.require(group['kind'] == 'test' and 'link=shared' in group.get('b2_properties', []) and
                             isinstance(group['python39'], str) and group['python39'] and required,
                             'Python 3.9 replay needs shared linking and a required test')


def replay_configurations(group):
    inactive = dict(group.get('inactive_tests', {}))
    later = group.get('later_tests', {})
    for edition, targets in later.items():
        inactive.update({target: f'Run in the C++{edition} variant' for target in targets})
    yield '', dict(group, inactive_tests=inactive)
    for edition, targets in sorted(later.items()):
        yield f'-cxx{edition}', dict(project=group['project'], edition=int(edition), targets=targets,
                                     b2_properties=group.get('b2_properties', []))


def recorded_edition(arguments):
    options = [value[5:] for value in arguments if value.startswith('-std=')]
    dialect = DIALECTS.get(options[-1]) if options else None
    return int(dialect[-2:]) if dialect else 0


def source_compilations(calls, project, root, label):
    prefix = project.removesuffix('/build') if project.endswith('/build') else project
    sources = Counter()
    for line in calls.read_text().splitlines():
        call = json.loads(line)
        if call['route'] != label or '-c' not in call['args'] or call['returncode'] != 0:
            continue
        for spelling in call['args']:
            if spelling.startswith('-') or Path(spelling).suffix not in boost_ci.CXX_SUFFIXES:
                continue
            path = (Path(call['cwd']) / spelling).resolve()
            if path.is_relative_to(root / prefix):
                relative = path.relative_to(root / prefix)
                if relative.parts[0] not in {'config', 'checks'}:
                    sources[str(path.relative_to(root)), recorded_edition(call['args'])] += 1
    return sources


def test_inventory(result, required, minimum):
    observed = Counter()
    for test in result['tests']:
        editions = tuple(sorted({recorded_edition(args) for args in test['sources']}))
        name = test['target']
        if test['kind'] == 'RUN_PYD' and not editions:
            boost_ci.require(name not in required, f"required language test has no compilation for {name}")
            observed[name, test['kind'], editions] += 1
            continue
        boost_ci.require(editions and editions[0] > 0, f"unrecorded language mode for {name}: {editions}")
        # Whole projects may explicitly select an older mode for a test.
        # Require the recovered declarations at the edition they needed.
        if name in required:
            boost_ci.require(editions[0] >= minimum, f"unexpected language mode for {name}: {editions}")
        observed[name, test['kind'], editions] += 1
    return observed


def b2_run(command, boost, environment, log, timeout):
    with log.open('w') as stream:
        stream.write(shlex.join(command) + '\n')
        stream.flush()
        with subprocess.Popen(command, cwd=boost, env=environment, stdout=stream,
                              stderr=subprocess.STDOUT, start_new_session=True) as process:
            try:
                status = process.wait(timeout=timeout)
            except subprocess.TimeoutExpired:
                os.killpg(process.pid, signal.SIGKILL)
                process.wait()
                raise
    boost_ci.require(status == 0, f'B2 exited {status}: {log}')


def replay(boost, settings, role, case, group, args):
    case.mkdir()
    compiler, jam, environment = settings
    invocations = case / 'invocations.jsonl'
    environment = dict(environment, BOOST_CI_INVOCATIONS=str(invocations),
                       BOOST_CI_SHARED_PYTHON='1' if group.get('shared_python_runtime') else '0')
    edition, project = group.get('replay_edition', group['edition']), group['project']
    targets = group.get('targets')
    # The XML target names include B2's .test suffix; explicit requests use
    # the target names written in the original Jamfile.
    requested = [name.removesuffix('.test') for name in targets] if targets else [project]
    requested.extend(project + '//' + alias for alias in group.get('b2_aliases', []))
    properties = {item.split('=')[0]: item for item in [
        'variant=debug', 'link=static', 'runtime-link=shared', 'threading=multi', 'pch=off',
        *group.get('b2_properties', []),
    ]}
    if group.get('python39'):
        prefix = args.python39
        boost_ci.require(prefix is not None, f'{project} needs --python39 with the CPython 3.9.25 prefix')
        header = prefix / 'include/python3.9/Python.h'
        boost_ci.require(header.is_file(), f'missing CPython 3.9 header: {header}')
        properties['python'] = 'python=3.9'
        properties['force-include'] = f'force-include={header}'
        library_path = [str(prefix / 'lib'), environment.get('LD_LIBRARY_PATH', '')]
        environment.update(LD_LIBRARY_PATH=':'.join(filter(None, library_path)), PYTHONDONTWRITEBYTECODE='1')
    command = [str(boost / 'b2'), *requested, '--ignore-site-config', '--user-config=' + str(jam),
               f'toolset=gcc-{role}', f'cxxstd={edition}', 'cxxstd-dialect=iso', '-j' + str(args.jobs),
               *properties.values(), '--build-dir=' + str(case / 'build'), '-a', '-d2', '--reconfigure',
               '--out-xml=' + str(case / 'b2.xml'), '--dump-tests']
    log = case / 'b2.log'
    b2_run(command, boost, environment, log, args.timeout)
    selected = set(targets) if targets else None
    result = boost_ci.review(case / 'b2.xml', log, invocations, project, None, role,
                             selected_targets=selected, inactive_tests=group.get('inactive_tests'))
    if group.get('kind') == 'build':
        observed = source_compilations(invocations, project, boost, role)
        boost_ci.require(observed and min(edition_key for _, edition_key in observed) >= edition,
                         f'{project}: no compiled library C++ sources at its required edition')
    else:
        wanted = set(targets or group.get('required_tests', []))
        observed = test_inventory(result, wanted, edition)
        boost_ci.require(any(editions and editions[-1] >= edition for _, _, editions in observed),
                         f'{project}: no test executed its original oracle at C++{edition} or later')
        boost_ci.require(wanted.issubset(test[0] for test in observed), f'{project}: required tests did not run')
    result['compiler'] = str(compiler)
    write_json(case / 'results.json', result)
    return observed


def compiler_setup(boost, output, role, compiler, reference, config, python39=None):
    directory = output / ('setup-' + role)
    directory.mkdir()
    jam = boost_ci.setup(boost, directory, role)
    if config:
        with jam.open('a') as stream:
            stream.write('\n' + config.read_text() + '\n')
    if python39 is not None:
        interpreter = python39 / 'bin/python3.9'
        boost_ci.require(os.access(interpreter, os.X_OK), f'missing CPython 3.9 interpreter: {interpreter}')
        with jam.open('a') as stream:
            stream.write(f'\nusing python : 3.9 : "{interpreter}" ;\n')
    host_cc = shutil.which('gcc')
    boost_ci.require(host_cc is not None, 'missing GCC C compiler')
    environment = dict(os.environ, BOOST_CI_COMPILER=str(compiler), BOOST_CI_HOST_CXX=str(reference),
                       BOOST_CI_HOST_CC=host_cc, BOOST_CI_LABEL=role, CPPGM_HOST_CXX=str(reference),
                       CPPGM_STDLIB_FLAGS='')
    return compiler, jam, environment


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--archive', type=Path, required=True)
    parser.add_argument('--compiler', type=Path, default=Path('dev/cppgm'))
    parser.add_argument('--reference', default='g++')
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--extra-user-config', type=Path)
    parser.add_argument('--python39', type=Path, help='CPython 3.9.25 installation prefix for the Parameter.Python test')
    parser.add_argument('--project', action='append')
    parser.add_argument('--edition', type=int, choices=(14, 17, 20))
    parser.add_argument('--smoke', action='store_true')
    parser.add_argument('--jobs', type=int, default=2)
    parser.add_argument('--timeout', type=int, default=3600, help='Per-project, per-compiler deadline in seconds')
    args = parser.parse_args()
    if min(args.jobs, args.timeout) < 1:
        parser.error('jobs and timeout must be positive')
    if args.python39 is not None:
        args.python39 = args.python39.resolve()
    manifest = Path(__file__).resolve().parents[1] / 'reports/boost-later-language-replay.json'
    inventory = json.loads(manifest.read_text())
    validate_inventory(inventory)
    groups = [g for g in [*inventory['projects'], *inventory['test_groups']]
              if (not args.smoke or g.get('smoke')) and (not args.project or g['project'] in args.project)
              and (args.edition is None or g['edition'] == args.edition)]
    boost_ci.require(groups, 'no selected Boost replay groups')
    boost_ci.require(boost_ci.digest(args.archive) == boost_ci.ARCHIVE_SHA256, 'Boost archive checksum mismatch')
    reference = shutil.which(args.reference)
    boost_ci.require(reference is not None and os.access(args.compiler, os.X_OK), 'missing cppgm or reference compiler')
    output = args.output.resolve()
    output.mkdir(parents=True)
    with tarfile.open(args.archive) as archive:
        archive.extractall(output / 'source', filter='data')
    boost = output / 'source' / 'boost_1_92_0'
    with (output / 'bootstrap.log').open('w') as log:
        subprocess.run(['./bootstrap.sh', '--with-toolset=gcc'], cwd=boost, stdout=log,
                       stderr=subprocess.STDOUT, check=True)
    # Freeze the executable for this invocation so an editor/rebuild cannot
    # change one of the compilers during a multi-project replay.
    candidate = shutil.copy2(args.compiler, output / 'cppgm')
    roles = {'gcc': Path(reference), 'cppgm': Path(candidate)}
    settings = {role: compiler_setup(boost, output, role, executable, reference, args.extra_user_config, args.python39)
                for role, executable in roles.items()}
    report = dict(boost=inventory['boost'], archive_sha256=boost_ci.ARCHIVE_SHA256,
                  inventory_sha256=boost_ci.digest(manifest),
                  compiler_sha256={role: boost_ci.digest(executable) for role, executable in roles.items()},
                  selected=groups, results=[])
    for index, group in enumerate(groups):
        tag = f"{index:02d}-cxx{group['edition']}-{group['project'].replace('/', '-')}"
        row = dict(group, path=tag, effective_edition=group.get('replay_edition', group['edition']))
        outcomes = 0
        variants = []
        try:
            for suffix, variant in replay_configurations(group):
                directory = output / (tag + suffix)
                directory.mkdir()
                native = replay(boost, settings['gcc'], 'gcc', directory / 'gcc', variant, args)
                actual = replay(boost, settings['cppgm'], 'cppgm', directory / 'cppgm', variant, args)
                boost_ci.require(actual == native, f"native inventory differs in {directory.name}: "
                                 f"missing {list(native - actual)[:8]}, extra {list(actual - native)[:8]}")
                count = sum(actual.values())
                outcomes += count
                variants.append(dict(path=directory.name, outcomes=count,
                                     edition=variant.get('replay_edition', variant['edition'])))
            row.update(status='passed', outcomes=outcomes)
        except (ValueError, OSError, subprocess.SubprocessError) as error:
            row.update(status='failed', error=str(error))
        if group.get('later_tests'):
            row['variants'] = variants
        report['results'].append(row)
        write_json(output / 'results.json', report)
        print(tag, row['status'], row.get('outcomes', row.get('error')), flush=True)
    return 0 if all(r['status'] == 'passed' for r in report['results']) else 1


if __name__ == '__main__':
    raise SystemExit(main())

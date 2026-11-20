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
        selected = set(group.get('targets', []))
        required = set(group.get('required_tests', []))
        later = group.get('later_tests', {})
        later_targets = [target for targets in later.values() for target in targets]
        if inactive_tests:
            boost_ci.require((group.get('kind') == 'test' or selected) and
                             all(isinstance(reason, str) and reason for reason in inactive_tests.values()) and
                             required.isdisjoint(inactive_tests), 'invalid registered test exclusions')
        if later:
            boost_ci.require((group.get('kind') == 'test' or selected) and
                             all(edition in {'17', '20'} and int(edition) > group.get('replay_edition', group['edition'])
                                 and targets for edition, targets in later.items()) and
                             len(later_targets) == len(set(later_targets)) and
                             set(later_targets).isdisjoint(required | inactive_tests.keys()),
                             'invalid later-edition test variants')
        classified = inactive_tests.keys() | set(later_targets)
        if selected:
            boost_ci.require(classified < selected, 'edition variants must partition the selected declarations')
        for target in required | selected | classified:
            boost_ci.require(re.fullmatch(r'libs/[A-Za-z0-9_/]+//[^/\s]+\.test', target) and
                             target.split('//')[0].startswith(project), 'invalid test declaration: ' + target)
        if group.get('b2_aliases'):
            boost_ci.require(group.get('kind') == 'test' and not group.get('targets') and
                             all(re.fullmatch(r'[A-Za-z0-9_]+', alias) for alias in group['b2_aliases']),
                             'invalid supplementary B2 aliases')
        replay_properties = {'link=shared'}
        if project == 'libs/safe_numerics/test':
            replay_properties.add('variant=release')
        if required | selected == {'libs/spirit/test/x3//x3_attribute_type_check.test'}:
            replay_properties.add('cxxflags=-include boost/type_traits/decay.hpp')
        boost_ci.require(all(p in replay_properties for p in group.get('b2_properties', [])),
                         'unreviewed project-specific B2 property')
        if 'shared_python_runtime' in group:
            reason = group['shared_python_runtime']
            boost_ci.require(isinstance(reason, str) and reason, 'shared Python runtime needs a recorded reason')
        if 'python39' in group:
            boost_ci.require(group['kind'] == 'test' and 'link=shared' in group.get('b2_properties', []) and
                             isinstance(group['python39'], str) and group['python39'] and required,
                             'Python 3.9 replay needs shared linking and a required test')
        if 'clang_reference' in group:
            boost_ci.require(isinstance(group['clang_reference'], str) and group['clang_reference'],
                             'a Clang reference needs a recorded reason')


def replay_configurations(group):
    inactive = dict(group.get('inactive_tests', {}))
    later = group.get('later_tests', {})
    for edition, targets in later.items():
        inactive.update({target: f'Run in the C++{edition} variant' for target in targets})
    if 'targets' in group:
        targets = [target for target in group['targets'] if target not in inactive]
        yield '', dict(group, targets=targets, inactive_tests={})
    else:
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
            if name in required:
                boost_ci.require(test.get('b2_cxxstd', 0) >= minimum,
                                 f"unrecorded language build variant for {name}")
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


def replace_replay_source(path, original, replacement):
    text = path.read_text()
    boost_ci.require(text.count(original) == 1, f'Boost replay source changed in {path}')
    path.write_text(text.replace(original, replacement))


def prepare_geometry_rtree(boost):
    # Boost.Geometry 4aa263966b restores support for Interprocess fancy pointers.
    rtree = boost / 'boost/geometry/index/detail/rtree'
    elements = rtree / 'node/node_elements.hpp'
    replace_replay_source(elements, '#include <vector>\n\n#include <boost/container/static_vector.hpp>\n',
                          '#include <boost/container/static_vector.hpp>\n#include <boost/container/vector.hpp>\n')
    namespace = 'namespace detail { namespace rtree {\n'
    alias = ('\ntemplate <typename Value, typename Allocator = void>\n'
             'using dynamic_container = boost::container::vector<Value, Allocator>;\n')
    replace_replay_source(elements, namespace, namespace + alias)
    replace_replay_source(elements, 'std::vector<NewValue>', 'rtree::dynamic_container<NewValue>')
    concept = '#include <boost/geometry/index/detail/rtree/node/concept.hpp>\n'
    for name in ('variant_dynamic.hpp', 'weak_dynamic.hpp'):
        node = rtree / 'node' / name
        replace_replay_source(node, '#include <vector>\n', '')
        replace_replay_source(node, concept, concept + '#include <boost/geometry/index/detail/rtree/node/node_elements.hpp>\n')
        for element in ('element_type', 'Value'):
            replace_replay_source(node, f'std::vector<{element}, allocator_type>',
                                  f'rtree::dynamic_container<{element}, allocator_type>')
    pack = rtree / 'pack_create.hpp'
    replace_replay_source(pack, '#include <vector>\n', '#include <iterator>\n')
    replace_replay_source(pack, 'std::vector<entry_type, temp_entry_allocator_type> entries(temp_entry_allocator);',
                          'using entries_type = rtree::dynamic_container<entry_type, temp_entry_allocator_type>;\n'
                          '        entries_type entries(temp_entry_allocator);')


def prepare_pfr_names(boost):
    # The original B2 probes test both pointer forms. cppgm uses its own
    # signature spelling and advertises the standard feature macro separately.
    config = boost / 'boost/pfr/config.hpp'
    gate = '#       if (defined(__cpp_nontype_template_args)'
    replace_replay_source(config, gate,
                          '#       if defined(__CPPGM__)\n'
                          '#           define BOOST_PFR_CORE_NAME_ENABLED 1\n'
                          '#       elif (defined(__cpp_nontype_template_args)')
    parser = '#ifndef BOOST_PFR_CORE_NAME_PARSING\n#   if defined(_MSC_VER)'
    replace_replay_source(config, parser,
                          '#ifndef BOOST_PFR_CORE_NAME_PARSING\n'
                          '#   if defined(__CPPGM__)\n'
                          '#       define BOOST_PFR_CORE_NAME_PARSING (0, 1, backward("."))\n'
                          '#   elif defined(_MSC_VER)')


def prepare_math_autodiff(boost):
    # Boost.Math #1551 drops the run-fail entries that contradict a run
    # declaration for the same source. Retain each distinct compile-fail test.
    jamfile = boost / 'libs/math/test/Jamfile.v2'
    text = jamfile.read_text()
    section = re.search(r'^# BEGIN AUTODIFF LONG RUNNING TESTS\n(.*?)^# END AUTODIFF LONG RUNNING TESTS$',
                        text, re.MULTILINE | re.DOTALL)
    boost_ci.require(section is not None, 'math autodiff test suite markers changed')
    tests = section[1]
    entry = re.compile(r'(?m)^[ \t]*\[ (run|run-fail|compile-fail) (\S+) \][ \t]*\n')
    declarations = Counter(entry.findall(tests))
    passing = {source for kind, source in declarations if kind == 'run'}
    failing = {source for kind, source in declarations if kind == 'run-fail'}
    rejected = {source for kind, source in declarations if kind == 'compile-fail'}
    boost_ci.require(len(passing) == 157 and len(failing) == 107 and len(rejected) == 323 and
                     failing <= passing and rejected.isdisjoint(passing) and sum(declarations.values()) == 592,
                     'math autodiff test declarations changed')

    emitted = set()

    def keep_unique(match):
        test = match.groups()
        if test[0] == 'run-fail' or test in emitted:
            return ''
        emitted.add(test)
        return match[0]

    first, last = section.span(1)
    jamfile.write_text(text[:first] + entry.sub(keep_unique, tests) + text[last:])


def prepare_replay_sources(boost, groups):
    projects = {group['project'] for group in groups}
    if projects & {'libs/geometry/index/test', 'libs/geometry/test'}:
        prepare_geometry_rtree(boost)
    if 'libs/gil/test' in projects:
        # GIL gives the compile and run alternatives the same default target.
        # Give the compile test its own name so B2 can run both original tests.
        jamfile = boost / 'libs/gil/test/core/io/Jamfile'
        jam = jamfile.read_text()
        boost_ci.require(jam.count('compile path_spec.cpp ;') == 1 and jam.count('run path_spec.cpp ;') == 1,
                         'GIL path_spec test declarations changed')
        jamfile.write_text(jam.replace('compile path_spec.cpp ;', 'compile path_spec.cpp : : path_spec_compile ;'))
    if 'libs/graph/test' in projects:
        # The isomorphism executable opens its original DOT inputs relative to B2's working directory.
        for name in ('github-428-0.dot', 'github-428-1.dot'):
            shutil.copyfile(boost / 'libs/graph/test' / name, boost / name)
    if 'libs/graph_parallel/test' in projects:
        distributed = boost / 'boost/graph/distributed'
        # Form one-past-the-end pointers without calling vector::operator[] there.
        for vector in ('centrality_v', 'edge_centrality_v'):
            replace_replay_source(distributed / 'betweenness_centrality.hpp',
                                  f'&{vector}[0], &{vector}[{vector}.size()]',
                                  f'{vector}.data(), {vector}.data() + {vector}.size()')
        # Trimming can leave an empty partition. The next BFS needs a vertex in each partition.
        end_of_trim = ('         std::sort(vertex_sets[i].begin(), vertex_sets[i].end(), '
                       'std::less<vertex_descriptor>());\n       }\n')
        replace_replay_source(distributed / 'strong_components.hpp', end_of_trim, end_of_trim +
                              '       vertex_sets.erase(std::remove_if(vertex_sets.begin(), vertex_sets.end(),\n'
                              '           [](const std::vector<vertex_descriptor>& set) { return set.empty(); }), '
                              'vertex_sets.end());\n')
    if 'libs/hana/test' in projects:
        # Hana selects a slicing offset for an implementation-defined string.
        # cppgm prints the same prefix as Clang, including when using GCC's headers.
        match = '#if defined(BOOST_HANA_CONFIG_CLANG)'
        replace_replay_source(boost / 'boost/hana/experimental/type_name.hpp', match,
                              match + ' || defined(__CPPGM__)')
    if 'libs/math/test' in projects:
        prepare_math_autodiff(boost)
    if 'libs/mpi/build' in projects:
        # Backport boostorg/mpi#180 and #181 for the optional Python module.
        # Its indexing suite must compile even though request equality raises.
        directory = boost / 'libs/mpi/src/python'
        end = '\n} } }\n\n#endif\n'
        declaration = '\n  bool operator==(request_with_value const&, request_with_value const&);\n'
        replace_replay_source(directory / 'request_with_value.hpp', end, declaration + end)
        entry = 'namespace boost { namespace mpi { namespace python {\n'
        definition = ('\nbool operator==(request_with_value const&, request_with_value const&) {\n'
                      '  PyErr_SetString(PyExc_NotImplementedError, "mpi requests are not comparable");\n'
                      '  throw error_already_set();\n'
                      '}\n')
        replace_replay_source(directory / 'py_request.cpp', entry, entry + definition)
    if 'libs/pfr/test' in projects:
        # Keep quotes in the GCC action so each type is one macro argument.
        jamfile = boost / 'libs/pfr/test/core/Jamfile.v2'
        for spelling in ('struct Foo', 'void()'):
            replace_replay_source(jamfile, f'BOOST_PFR_RUN_TEST_ON="{spelling}"',
                                  rf'BOOST_PFR_RUN_TEST_ON="\"{spelling}\""')
        if any(group['project'] == 'libs/pfr/test' and group['edition'] == 20 for group in groups):
            prepare_pfr_names(boost)
    if 'libs/yap/test' in projects:
        # The unary operator tests use uint32_t directly.
        replace_replay_source(boost / 'libs/yap/test/operators_unary.cpp', '#include <sstream>\n',
                              '#include <stdint.h>\n#include <sstream>\n')
    if 'libs/numeric/ublas/test' in projects:
        # This test's timing helper uses the legacy timer API.
        timer = '#include <boost/timer.hpp>\n'
        replace_replay_source(boost / 'libs/numeric/ublas/test/test_assignment.cpp', timer,
                              '#define BOOST_TIMER_ENABLE_DEPRECATED\n' + timer)
    if 'libs/outcome/test' in projects:
        # The release archive lays out Boost.Predef headers at its root.
        replace_replay_source(boost / 'libs/predef/tools/check/predef.jam', '$(predef_jam:D)/../../include',
                              '$(predef_jam:D)/../../../..')
        # A missing header would make the negative tests pass prematurely.
        negatives = boost / 'libs/outcome/test/compile-fail'
        for source in ('issue0071-fail', 'outcome-int-int-1', 'result-int-int-1', 'result-int-int-2'):
            header = 'boost/outcome.hpp' if source == 'outcome-int-int-1' else 'boost/outcome/result.hpp'
            replace_replay_source(negatives / (source + '.cpp'), '#include "../../include/' + header + '"',
                                  '#include <' + header + '>')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--archive', type=Path, required=True)
    parser.add_argument('--compiler', type=Path, default=Path('dev/cppgm'))
    parser.add_argument('--reference', default='g++')
    parser.add_argument('--clang-reference', default='clang++-21', help='Native compiler for cases with a GCC failure')
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
    clang = None
    if any(group.get('clang_reference') for group in groups):
        clang = shutil.which(args.clang_reference)
        boost_ci.require(clang is not None, 'missing Clang reference compiler')
    output = args.output.resolve()
    output.mkdir(parents=True)
    with tarfile.open(args.archive) as archive:
        archive.extractall(output / 'source', filter='data')
    boost = output / 'source' / 'boost_1_92_0'
    prepare_replay_sources(boost, groups)
    with (output / 'bootstrap.log').open('w') as log:
        subprocess.run(['./bootstrap.sh', '--with-toolset=gcc'], cwd=boost, stdout=log,
                       stderr=subprocess.STDOUT, check=True)
    # Freeze the executable for this invocation so an editor/rebuild cannot
    # change one of the compilers during a multi-project replay.
    candidate = shutil.copy2(args.compiler, output / 'cppgm')
    roles = {'gcc': Path(reference), 'cppgm': Path(candidate)}
    settings = {role: compiler_setup(boost, output, role, executable, reference, args.extra_user_config, args.python39)
                for role, executable in roles.items()}
    if clang is not None:
        # Keep the same B2 properties, library headers and link driver.
        # Only replace the native C++ compiler for the cases GCC cannot run.
        libgcc = Path(subprocess.check_output([reference, '-print-libgcc-file-name'], text=True).strip())
        boost_ci.require(libgcc.is_absolute() and libgcc.is_file(), f'missing GCC installation for Clang: {libgcc}')
        launcher = output / 'clang-reference'
        command = shlex.join([clang, f'--gcc-install-dir={libgcc.parent}'])
        launcher.write_text(f'#!/bin/sh\nexec {command} "$@"\n')
        launcher.chmod(0o755)
        roles['reference'] = Path(clang)
        settings['reference'] = compiler_setup(boost, output, 'reference', launcher, reference,
                                                args.extra_user_config, args.python39)
    report = dict(boost=inventory['boost'], archive_sha256=boost_ci.ARCHIVE_SHA256,
                  inventory_sha256=boost_ci.digest(manifest),
                  compiler_sha256={role: boost_ci.digest(executable) for role, executable in roles.items()},
                  selected=groups, results=[])
    for index, group in enumerate(groups):
        tag = f"{index:02d}-cxx{group['edition']}-{group['project'].replace('/', '-')}"
        row = dict(group, path=tag, effective_edition=group.get('replay_edition', group['edition']))
        native_role = 'reference' if group.get('clang_reference') else 'gcc'
        outcomes = 0
        variants = []
        try:
            for suffix, variant in replay_configurations(group):
                directory = output / (tag + suffix)
                directory.mkdir()
                native = replay(boost, settings[native_role], native_role, directory / native_role, variant, args)
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

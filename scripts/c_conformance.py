"""Run C clause probes and report their evidence by edition and target profile."""

import argparse
from collections import Counter
import json
from pathlib import Path
import platform
import re
import subprocess
import sys

from run_cxx11_ci_suite import LIMITS
from upstream_dg_proxy import execute, sha256, write_json


ROOT = Path(__file__).resolve().parents[1]
INVENTORY = ROOT / 'reports/c-conformance.json'
C_EDITIONS = (90, 95, 99, 11, 17, 23)
PILOT_EDITIONS = (99, 11, 17)
RUN_STAGES = ('compile', 'link', 'run')
CASES = {
    'limits.combined': (RUN_STAGES, ('O0', 'O2')),
    'include.physical': (RUN_STAGES, ('O0',)),
    'line.diagnostic-location': (('preprocess',), ('default',)),
    'error.message': (('preprocess',), ('default',)),
}
INCLUDE_SOURCE = ROOT / 'pa38/tests/general/100-c-include-physical.t'
ERROR_SOURCE = ROOT / 'pa4/tests/directives/150-error-message.t'
ERROR_MESSAGE = '#error DETAIL: physical message "payload"'


def load(path):
    return json.loads(path.read_text())


def by_id(rows, kind):
    indexed = {}
    for row in rows:
        name = row.get('id')
        if not isinstance(name, str) or not re.fullmatch(r'[a-z0-9]+(?:[._-][a-z0-9]+)*', name):
            raise ValueError(f'missing or invalid {kind} ID: {name!r}')
        if name in indexed:
            raise ValueError(f'duplicate {kind}: {name}')
        indexed[name] = row
    return indexed


def inventory(path):
    document = load(path)
    if document['schema'] != 1:
        raise ValueError('unsupported C inventory schema')
    profiles = by_id(document['profiles'], 'profile')
    rules = by_id(document['rules'], 'rule')
    for name, profile in profiles.items():
        if profile['environment'] not in {'hosted', 'freestanding'} or not profile['target']:
            raise ValueError(f'invalid environment or target for {name}')
    for name, rule in rules.items():
        editions, cases = rule['editions'], rule['cases']
        if not editions or len(set(editions)) != len(editions) or set(editions) - set(C_EDITIONS):
            raise ValueError(f'invalid editions on {name}')
        if not rule['clause'] or not rule['requirement'] or rule['environment'] not in {'all', 'hosted', 'freestanding'}:
            raise ValueError(f'invalid applicability on {name}')
        if rule['kind'] not in {'required', 'conditional', 'implementation-defined', 'gnu'}:
            raise ValueError(f'invalid rule kind on {name}')
        if len(set(cases)) != len(cases) or set(cases) - CASES.keys():
            raise ValueError(f'duplicate or unrecognized case on {name}')
    return profiles, rules


def evidence_key(row, profiles):
    case, profile, edition, variant = key = tuple(row[name] for name in ('case', 'profile', 'edition', 'variant'))
    if case not in CASES or profile not in profiles or edition not in C_EDITIONS or variant not in CASES[case][1]:
        raise ValueError(f'unknown case or configuration: {key}')
    if any(row[name] != profiles[profile][name] for name in ('target', 'environment')):
        raise ValueError(f'target or environment mismatch: {key}')
    stages, _ = CASES[case]
    names = tuple(stage['name'] for stage in row['stages'])
    if not names or names != stages[:len(names)] or row['status'] not in {'passed', 'failed'}:
        raise ValueError(f'invalid stage history or outcome: {key}')
    if row['status'] == 'passed':
        want = ('success', 0) if stages == RUN_STAGES else ('rejection', 1)
        outcomes = [(stage['classification'], stage['returncode']) for stage in row['stages']]
        if names != stages or outcomes != [want] * len(stages):
            raise ValueError(f'passing result lacks stage evidence: {key}')
    return key


def read_evidence(paths, profiles):
    receipts = {}
    revision = None
    for path in paths:
        document = load(path)
        if document['schema'] != 1:
            raise ValueError(f'unsupported receipt schema in {path}')
        if revision is None:
            revision = document['revision']
        elif revision != document['revision']:
            raise ValueError('receipts must describe the same source revision')
        for row in document['results']:
            key = evidence_key(row, profiles)
            if key in receipts:
                raise ValueError(f'duplicate receipt: {key}')
            receipts[key] = row['status']
    return receipts


def coverage(profiles, rules, receipts):
    for rule in rules.values():
        for edition in rule['editions']:
            for profile, info in profiles.items():
                keys = [(case, profile, edition, variant)
                        for case in rule['cases'] for variant in CASES[case][1]]
                if rule['environment'] not in {'all', info['environment']}:
                    status = 'inapplicable'
                elif any(receipts.get(key) == 'failed' for key in keys):
                    status = 'failing'
                elif keys and all(receipts.get(key) == 'passed' for key in keys):
                    status = 'passing'
                else:
                    status = 'uncovered'
                yield dict(rule=rule['id'], clause=rule['clause'], kind=rule['kind'],
                           requirement=rule['requirement'], edition=edition, profile=profile,
                           status=status, environment=rule['environment'],
                           missing=[list(key) for key in keys if key not in receipts] if status == 'uncovered' else [])


def report(args, profiles, rules):
    rows = list(coverage(profiles, rules, read_evidence(args.receipts, profiles)))
    print('### C clause evidence\n')
    print('| Edition | Profile | Passing | Failing | Uncovered | Inapplicable |')
    print('| --- | --- | ---: | ---: | ---: | ---: |')
    counts = {}
    for row in rows:
        counts.setdefault((row['edition'], row['profile']), Counter())[row['status']] += 1
    for (edition, profile), outcomes in counts.items():
        values = [outcomes[status] for status in ('passing', 'failing', 'uncovered', 'inapplicable')]
        print(f'| C{edition} | {profile} | ' + ' | '.join(map(str, values)) + ' |')
    if args.output:
        write_json(args.output, dict(schema=1, rows=rows))
    return int(any(row['status'] == 'failing' for row in rows))


def run_stages(directory, commands):
    directory.mkdir(parents=True)
    stages = []
    for name, command in commands:
        # Wasmtime reserves virtual memory for guards as well as linear memory.
        limits = dict(LIMITS, address_space_bytes=64 * 1024 ** 3) if name == 'run' else LIMITS
        result, _, diagnostic = execute(command, directory / name, limits)
        stages.append(dict(name=name, **result))
        if result['classification'] != 'success':
            break
    return stages, diagnostic


def receipt(case, profile, edition, variant, passed, stages):
    return dict(case=case, profile=profile['id'], target=profile['target'],
                environment=profile['environment'], edition=edition, variant=variant,
                status='passed' if passed else 'failed', stages=stages)


def probe_target(output, profile, compiler, setup, link, runner):
    for edition in PILOT_EDITIONS:
        flags = [compiler, '--target=' + profile['target'], *setup, '-x', 'c', f'-std=c{edition}', '-pedantic-errors']
        work = output / profile['id'] / f'c{edition}'
        for case, source in (('limits.combined', output / 'inputs/combined.c'), ('include.physical', INCLUDE_SOURCE)):
            for variant in CASES[case][1]:
                directory = work / case / variant
                obj, binary = str(directory / 'case.o'), str(directory / 'case.exe')
                stages, _ = run_stages(directory, [
                    ('compile', [*flags, '-' + variant, '-c', str(source), '-o', obj]),
                    ('link', [*link, obj, '-o', binary]),
                    ('run', [*runner, binary]),
                ])
                passed = stages[-1]['name'] == 'run' and stages[-1]['classification'] == 'success'
                yield receipt(case, profile, edition, variant, passed, stages)
        stages, text = run_stages(work / 'error', [
            ('preprocess', [*flags, '-E', str(ERROR_SOURCE), '-o', '/dev/null']),
        ])
        rejected = stages[0]['classification'] == 'rejection' and stages[0]['returncode'] == 1
        for case, found in (
            ('line.diagnostic-location', 'generated-error.cpp:40:2: #error' in text),
            ('error.message', ERROR_MESSAGE in text and '#error skipped' not in text),
        ):
            yield receipt(case, profile, edition, 'default', rejected and found, stages)


def probes(args, profiles, _rules):
    if platform.system() != 'Linux' or platform.machine() != 'x86_64':
        raise ValueError('the pilot runner requires an x86-64 Linux host')
    output = args.output.resolve()
    work = output / 'inputs'
    work.mkdir(parents=True)
    limits = work / 'combined.c'
    with limits.open('wb') as file:
        subprocess.run([sys.executable, str(ROOT / 'scripts/generate_c_translation_limits.py'), str(work)],
                       stdout=file, check=True)
    compiler = str(args.candidate.resolve())
    results = list(probe_target(output, profiles['linux-x86_64-hosted'], compiler, [], [args.cc], []))
    if args.wasi_sysroot:
        wasi = profiles['wasi-hosted']
        if args.wasi_resource_dir is None:
            raise ValueError('--wasi-resource-dir is required for a WASI replay')
        sysroot = '--sysroot=' + str(args.wasi_sysroot)
        setup = [sysroot, '-resource-dir=' + str(args.wasi_resource_dir)]
        link = [compiler, '--target=' + wasi['target'], sysroot]
        results.extend(probe_target(output, wasi, compiler, setup, link, [args.wasmtime, 'run']))
    revision = subprocess.check_output(['git', '-C', str(ROOT), 'rev-parse', 'HEAD'], text=True).strip()
    inputs = sorted([*work.glob('*.h'), limits, ERROR_SOURCE, INCLUDE_SOURCE,
                     INCLUDE_SOURCE.parent / 'c-include-physical.h', INCLUDE_SOURCE.parent / 'c-include-local.h'])
    write_json(output / 'receipts.json', dict(schema=1, revision=revision, compiler_sha256=sha256(Path(compiler)),
                                            inputs={str(source): sha256(source) for source in inputs}, results=results))
    return int(any(row['status'] == 'failed' for row in results))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--inventory', type=Path, default=INVENTORY)
    commands = parser.add_subparsers(required=True)
    run = commands.add_parser('probe')
    run.add_argument('--output', type=Path, required=True)
    run.add_argument('--candidate', type=Path, default=ROOT / 'dev/cppgm')
    run.add_argument('--cc', default='cc')
    run.add_argument('--wasi-sysroot', type=Path)
    run.add_argument('--wasi-resource-dir', type=Path)
    run.add_argument('--wasmtime', default='wasmtime')
    run.set_defaults(command=probes)
    show = commands.add_parser('report')
    show.add_argument('receipts', nargs='*', type=Path)
    show.add_argument('--output', type=Path)
    show.set_defaults(command=report)
    args = parser.parse_args()
    try:
        return args.command(args, *inventory(args.inventory))
    except (OSError, ValueError, KeyError, subprocess.CalledProcessError) as error:
        parser.exit(2, f'{error}\n')


if __name__ == '__main__':
    sys.exit(main())

#!/usr/bin/env python3
"""Adapt validated Godot measurements to the shared benchmark record format."""
import argparse
import hashlib
import json
import math
from pathlib import Path
import re
import statistics
import subprocess
import sys
import tempfile

import benchmark_report
import godot_ci as producer


def digest(value):
    return hashlib.sha256(json.dumps(value, sort_keys=True).encode()).hexdigest()


def normalize(artifact, environment, run_url, details_url, raw_url):
    document = json.loads((artifact / 'results.json').read_text())
    producer.validate(document)
    metadata = document['metadata']
    if metadata['dirty']:
        raise ValueError('shared publication requires a clean measured revision')
    host = dict(cpu=metadata['cpu'], architecture='x86_64', environment=environment)
    host['id'] = 'godot-' + digest(host)[:16]
    observations = [json.loads(line) for line in (artifact / 'runtime-observations.jsonl').read_text().splitlines()]
    provenance = dict(source_commit=document['source_commit'], metadata_sha256=digest(metadata),
                      metadata_url=details_url.rsplit('/', 1)[0] + '/metadata.json',
                      independent_checksums=document['correctness'],
                      binary_hashes=document.get('binary_hashes', 'not recorded'),
                      runtime_observations_sha256=hashlib.sha256(
                          (artifact / 'runtime-observations.jsonl').read_bytes()).hexdigest(),
                      command_manifests={p.name: hashlib.sha256(p.read_bytes()).hexdigest()
                                         for p in sorted(artifact.glob('commands-*.json'))},
                      historical_unknowns={key: 'not recorded' for key in
                                           ('system', 'standard_library') if key not in metadata})
    identity = dict(source=producer.COMMIT, configuration='headless-release',
                    workload_hashes=metadata['workload_hashes'], iterations=100000)
    flags = {label: dict(scons=metadata['flags'], command_manifest='commands-' + label + '.json',
                        additional_cpp_flags=[])
             for label in producer.LABELS}
    links = dict(run_url=run_url, details_url=details_url, raw_url=raw_url)
    base = dict(workload='godot', configuration='headless-release', optimization='O3',
                host=host, revision=metadata['revision'], status='passed', provenance=provenance, **links)

    def coverage(cases, unit):
        count = len(cases)
        return dict(selected=count, candidate_executed=count, candidate_passed=count,
                    reference_executed=count, reference_passed=count, excluded=0, unit=unit,
                    case_set_sha256=digest(dict(identity, cases=list(cases))))

    def context(phase):
        cpus = [int(c) for c in metadata['cpus'].split(',')]
        affinity = cpus if phase == 'build' else [int(c) for c in metadata['runtime_cpu'].split(',')]
        jobs = metadata.get('jobs')
        if jobs is None:
            jobs = int(next(arg[2:] for arg in document['compilation']['cppgm']['command']
                            if arg.startswith('-j') and arg[2:].isdigit()))
        return dict(language='GNU C++17; C sources and final link use GCC',
                    target_isa='x86-64, SSE4.2, POPCNT; no native CPU tuning',
                    standard_library=metadata.get('standard_library', 'host libstdc++; exact identity not recorded'),
                    workers=jobs if phase == 'build' else 1,
                    affinity=affinity, flags=flags)

    records = []
    for ref in ('gcc', 'clang'):
        for metric, build_key, runtime_key in [('cpu_seconds', 'cpu', 'cpu'),
                                               ('elapsed_seconds', 'wall', 'measured_wall')]:
            candidate = document['compilation']['cppgm'][build_key]
            reference = document['compilation'][ref][build_key]
            records.append(dict(base, baseline=ref, test='full-build', scope='summary', phase='build',
                                context=context('build'), metric=metric,
                                method='One clean full build per compiler; includes SCons, C compilation and GCC link',
                                coverage=coverage(['full-build'], 'full builds'), speedup=reference / candidate,
                                provenance=dict(provenance, build_observations={
                                    label: document['compilation'][label] for label in ('cppgm', ref)}),
                                candidate_seconds=candidate, reference_seconds=reference))
            for name in producer.WORKLOADS:
                rows = [r for r in observations if r.get('phase') == 'AB-' + ref and r.get('workload') == name]
                def absolute(label):
                    values = [r[runtime_key] for r in rows if r['label'] == label]
                    if not values:
                        raise ValueError('missing raw runtime observations: ' + name + ' / ' + label)
                    return statistics.median(values)
                records.append(dict(base, baseline=ref, test=name, scope='test', phase='runtime',
                                    context=context('runtime'), metric=metric,
                                    method='Median paired ABBA/BAAB block ratios; absolute times are observation medians; '
                                           + ('process CPU includes startup' if runtime_key == 'cpu' else 'work elapsed excludes startup'),
                                    coverage=coverage([name], 'checked workloads'),
                                    provenance=dict(provenance, timing=document['runtime'][name][ref][runtime_key]),
                                    speedup=document['runtime'][name][ref][runtime_key]['speed'],
                                    candidate_seconds=absolute('cppgm'), reference_seconds=absolute(ref)))
            value = math.exp(statistics.mean(math.log(document['runtime'][name][ref][runtime_key]['speed'])
                                             for name in producer.WORKLOADS))
            records.append(dict(base, baseline=ref, test='checked-workloads', scope='summary', phase='runtime',
                                context=context('runtime'), metric=metric,
                                method='Equal-weight geometric mean of all five median paired block speedups; '
                                       + ('process CPU includes startup' if runtime_key == 'cpu' else 'work elapsed excludes startup'),
                                coverage=coverage(producer.WORKLOADS, 'checked workloads'), speedup=value,
                                provenance=dict(provenance, timing={
                                    name: document['runtime'][name][ref][runtime_key] for name in producer.WORKLOADS}),
                                candidate_seconds=None, reference_seconds=None))
    cov = coverage(producer.WORKLOADS, 'checked workloads per compiler')
    validation = dict(base, oracle='Independent Python checksums for cppgm, GCC and Clang; full builds succeed',
                      coverage={key: cov[key] for key in ('selected', 'excluded', 'unit', 'case_set_sha256')})
    validation['coverage'].update(executed=cov['selected'], passed=cov['selected'])
    return dict(schema=1, records=records, validations=[validation])


RUN_URL = re.compile(r'/actions/runs/([0-9]+)')
MOVED = .05


def published_history(directory):
    """Earlier published results under godot/<host>/ and godot/history/<revision>/<host>/, newest first."""
    entries, seen = [], set()
    for path in sorted([*directory.glob('*/results.json'), *directory.glob('history/*/*/results.json')]):
        try:
            document = json.loads(path.read_text())
            report = path.with_name('report.md')
            runs = RUN_URL.findall(report.read_text()) if report.is_file() else []
        except (OSError, ValueError):
            continue
        key = json.dumps(document, sort_keys=True)
        if not isinstance(document, dict) or key in seen:
            continue
        seen.add(key)
        metadata = document.get('metadata') if isinstance(document.get('metadata'), dict) else {}
        order = (str(metadata.get('measured_at', '')), max(map(int, runs), default=0))
        entries.append((order, path.relative_to(directory).as_posix(), document))
    return [(name, document) for _, name, document in sorted(entries, key=lambda e: e[0], reverse=True)]


def git_history(repository, ref, prefix='godot'):
    """Read published history from a Git ref, such as origin/benchmark-badges, without a checkout."""
    def git(*arguments):
        return subprocess.run(['git', '-C', str(repository), *arguments], capture_output=True, check=True).stdout
    names = git('ls-tree', '-r', '--name-only', ref, prefix + '/').decode().splitlines()
    wanted = [name for name in names if re.fullmatch(re.escape(prefix) + r'/(?:history/[0-9a-f]{40}/)?[^/]+/'
                                                    r'(?:results\.json|report\.md)', name)]
    with tempfile.TemporaryDirectory() as temporary:
        for name in wanted:
            path = Path(temporary) / name
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(git('show', ref + ':' + name))
        return published_history(Path(temporary) / prefix)


def compared_key(document):
    """The work time the badge uses, or work wall time for results that predate the choice."""
    return document.get('badge_metric', 'measured_wall')


def reference_drift(document, earlier, observations=None, threshold=MOVED):
    """Compare each reference binary's time per pass with its latest earlier run on the same CPU model."""
    times = document.get('time_per_pass') or (producer.pass_times(observations) if observations else {})
    metadata = document['metadata']
    key = compared_key(document)
    references, moved = {}, []
    for ref in ('gcc', 'clang'):
        binary = document.get('binary_hashes', {}).get(ref)
        for name in producer.WORKLOADS:
            row = dict(state='not recorded')
            current = times.get(name, {}).get(ref, {}).get(key, {}).get('median')
            older = 0
            for source, previous in earlier:
                if previous == document:
                    continue
                past = previous.get('metadata') or {}
                if (current is None or binary is None or past.get('cpu') != metadata['cpu']
                        or (previous.get('binary_hashes') or {}).get(ref) != binary):
                    continue
                value = ((previous.get('time_per_pass') or {}).get(name, {}).get(ref, {}).get(key) or {}).get('median')
                if not isinstance(value, (int, float)) or value <= 0:
                    older += 1
                    continue
                change = current / value - 1
                row = dict(state='moved' if abs(change) > threshold else 'steady', current_seconds=current,
                           previous_seconds=value, change=change, previous_revision=past.get('revision'),
                           previous=source)
                if row['state'] == 'moved':
                    moved.append(dict(reference=ref, workload=name, change=change, previous_seconds=value,
                                      current_seconds=current))
                break
            else:
                if current is not None:
                    row = dict(state='no earlier run', current_seconds=current)
            if older:
                row['skipped_without_time_per_pass'] = older
            references.setdefault(ref, {})[name] = row
    return dict(schema=1, metric=key, threshold=threshold, revision=metadata['revision'],
                measured_at=metadata.get('measured_at'), cpu=metadata['cpu'],
                binary_hashes={ref: document.get('binary_hashes', {}).get(ref) for ref in ('gcc', 'clang')},
                references=references, moved=moved)


def drift_markdown(drift):
    names = dict(gcc='GCC', clang='Clang')
    text = ('\n## Reference binaries against earlier runs\n\n'
            f"Each reference binary's `{drift['metric']}` time per pass is compared with the latest earlier run "
            'that has the same binary SHA-256 and the same CPU model. A change above '
            f"{drift['threshold']:.0%} reads **reference moved**. The ratio of that workload then shows a change "
            'of the reference binary or of the runner, not of cppgm.\n\n'
            '| Workload | Reference | This run (ms) | Earlier run (ms) | Change | Earlier revision | State |\n'
            '|---|---|---:|---:|---:|---|---|\n')
    for ref in ('gcc', 'clang'):
        for name in producer.WORKLOADS:
            row = drift['references'][ref][name]
            def ms(field):
                return f'{row[field] * 1e3:.2f}' if field in row else '-'
            change = f"{row['change']:+.1%}" if 'change' in row else '-'
            revision = f"`{row['previous_revision'][:9]}`" if row.get('previous_revision') else '-'
            state = '**reference moved**' if row['state'] == 'moved' else row['state']
            if row.get('skipped_without_time_per_pass'):
                state += f" ({row['skipped_without_time_per_pass']} earlier without time per pass)"
            text += (f'| {name} | {names[ref]} | {ms("current_seconds")} | {ms("previous_seconds")} | {change} | '
                     f'{revision} | {state} |\n')
    return text


def drift_main(args):
    artifact = args.artifact
    document = json.loads((artifact / 'results.json').read_text())
    path = artifact / 'runtime-observations.jsonl'
    observations = [json.loads(line) for line in path.read_text().splitlines()] if path.is_file() else None
    earlier = []
    for item in args.earlier:
        previous = json.loads((item / 'results.json').read_text())
        rows = item / 'runtime-observations.jsonl'
        if not previous.get('time_per_pass') and rows.is_file():
            previous = dict(previous, time_per_pass=producer.pass_times(
                [json.loads(line) for line in rows.read_text().splitlines()]))
        earlier.append((str(item), previous))
    try:
        if args.history_ref:
            earlier += git_history(args.repository, args.history_ref)
        if args.history:
            earlier += published_history(args.history)
    except (OSError, subprocess.CalledProcessError) as error:
        print(f'Published history unavailable: {error!r}', file=sys.stderr)
    drift = reference_drift(document, earlier, observations)
    if args.output:
        args.output.write_text(json.dumps(drift, indent=2) + '\n')
    print(drift_markdown(drift))


def generate(artifact, output, environment, run_url, details_url, raw_url):
    catalog = json.loads((producer.ROOT / 'benchmarks/catalog.json').read_text())
    document = normalize(artifact, environment, run_url, details_url, raw_url)
    benchmark_report.render(catalog, document, output)


def main():
    if sys.argv[1:2] == ['drift']:
        parser = argparse.ArgumentParser(description=reference_drift.__doc__, prog='godot_results.py drift')
        parser.add_argument('artifact', type=Path)
        parser.add_argument('--earlier', type=Path, nargs='*', default=[],
                            help='earlier run artifacts, newest first; searched before published history')
        parser.add_argument('--history', type=Path, help='published godot/ directory of the badge branch')
        parser.add_argument('--history-ref', help='Git ref of the badge branch, such as origin/benchmark-badges')
        parser.add_argument('--repository', type=Path, default=producer.ROOT)
        parser.add_argument('--output', type=Path, help='write the comparison as JSON')
        drift_main(parser.parse_args(sys.argv[2:]))
        return
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('artifact', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--environment', required=True)
    for key in ('run-url', 'details-url', 'raw-url'):
        parser.add_argument('--' + key, required=True)
    args = parser.parse_args()
    generate(args.artifact, args.output, args.environment, args.run_url, args.details_url, args.raw_url)


if __name__ == '__main__':
    main()

#!/usr/bin/env python3
"""Refresh benchmark labels and revision age without changing measurements."""
import argparse
from html import escape
import json
from pathlib import Path, PurePosixPath
import re
import subprocess
import xml.etree.ElementTree as ET

from benchmark_hosts import BACKEND_CAPTIONS
from library_benchmark_badges import HOSTS
from publish_benchmark_badges import badge_svg

CAPTIONS = {**HOSTS, **BACKEND_CAPTIONS}
STALE_COMMITS = 10
HIDDEN_COMMITS = 100
NS = '{http://www.w3.org/2000/svg}'


def comparison(repo, measured, main):
    # Page two omits the potentially large file diff. One request per distinct
    # measured revision, never per badge; the response still includes counts.
    endpoint = f'repos/{repo}/compare/{measured}...{main}?per_page=1&page=2'
    data = json.loads(subprocess.check_output(['gh', 'api', endpoint], text=True))
    status = data['status']
    return dict(commits_behind=data['ahead_by'] if status in ('ahead', 'identical') else None,
                status=status, measured_at=data['base_commit']['commit']['committer']['date'])


def groups(target):
    for host in HOSTS:
        directory = target / host
        public = [directory / f'{level}-{phase}{reference}.svg' for level in ('o0', 'o3')
                  for phase in ('compile', 'generated') for reference in ('', '-clang')]
        builds = [directory / (name + '.svg') for name in
                  ('self-compile', 'self-built', 'self-compile-clang', 'self-built-clang')]
        yield 'Public programs', host, directory / 'provenance.json', (p for p in public if p.exists()), directory / 'report.md'
        yield 'cppgm', host, directory / 'self-build-provenance.json', (p for p in builds if p.exists()), directory / 'self-build.md'
        for workload in ('index-cpp', 'simdjson', 'godot', 'boost/o3', 'internal', 'wasm', 'wasm-selfbuild'):
            directory = target / workload
            yield workload, host, directory / host / 'metadata.json', directory.glob(host + '-*.svg'), directory / host / 'report.md'

    for backend in BACKEND_CAPTIONS:
        directory = target / 'backend' / backend
        yield 'Backend performance', backend, directory / 'metadata.json', directory.glob('*.svg'), directory / 'report.md'


def keep_newest(target, repo, compare=comparison):
    """Undo a publication that would replace a measurement of a newer commit.

    Runs of two commits can end in either order. A host keeps the measurement
    of its newest commit; the run of the older commit keeps its history entry.
    """
    def git(*arguments, check=True):
        return subprocess.run(['git', '-C', str(target), *arguments], check=check, capture_output=True, text=True)

    top = git('rev-parse', '--show-toplevel', check=False)
    if top.returncode or Path(top.stdout.strip()).resolve() != target.resolve():
        return []
    older, newer = [], []
    for workload, host, metadata_path, _, _ in groups(target):
        before = git('show', 'HEAD:' + metadata_path.relative_to(target).as_posix(), check=False)
        if before.returncode or not metadata_path.exists():
            continue
        published, measured = (json.loads(text)['revision'] for text in (before.stdout, metadata_path.read_text()))
        if published != measured:
            # The published commit is ahead of the measured one: the measured one is its ancestor.
            behind = compare(repo, measured, published)['commits_behind']
            (older if behind else newer).append(dict(workload=workload, host=host, published=published,
                                                     measured=measured))
    if older and newer:
        raise ValueError('one publication holds measurements of both newer and older commits')
    if older:
        changed = git('status', '--porcelain', '-z', '--untracked-files=all').stdout
        for state, name in ((entry[:2], entry[3:]) for entry in changed.split('\0') if entry):
            if 'history' in PurePosixPath(name).parts:
                continue
            if state == '??':
                (target / name).unlink()
            else:
                git('checkout', '-q', 'HEAD', '--', name)
    return older


def render(path, caption, metadata, age):
    root = ET.fromstring(path.read_text())
    message = root.get('data-original-message')
    if message is None:
        message = root.findall(NS + 'text')[-1].text or ''
    label = root.get('data-original-label')
    if label is None:
        label = (root.findtext(NS + 'title') or root.get('aria-label', '')).removesuffix(': ' + message)
    color = root.get('data-original-color')
    if color is None:
        color = root.findall('.//' + NS + 'rect')[-1].get('fill', '#475569').removeprefix('#')
    measured = metadata is not None and message not in ('n/m', 'n/a', 'no data')
    note, stale, hidden = '', False, False
    if measured:
        count = age['commits_behind']
        stale = count is None or count >= STALE_COMMITS
        hidden = count is not None and count >= HIDDEN_COMMITS
        detail = f'{count} commits behind main' if count is not None else 'outside main history'
        cpu = '' if metadata['cpu'] in label else '; ' + metadata['cpu']
        note = f"{cpu}; measured {metadata['revision']}; {detail}"
    attributes = (f' data-original-label="{escape(label, quote=True)}"'
                  f' data-original-message="{escape(message, quote=True)}"')
    # A moved reference binary (library_benchmark_badges) keeps its mark and neutral color.
    moved = root.get('data-reference-moved')
    display = message + ('†' if moved else '') + ('*' if stale else '')
    shown = '475569' if moved else color
    if moved:
        attributes += f' data-reference-moved="{escape(moved, quote=True)}"'
        label += '; reference moved: ' + moved
    if hidden:
        display, shown = 'stale', '475569'
    if shown != color:
        attributes += f' data-original-color="{escape(color, quote=True)}"'
    data = dict(label=label + note, left_label=caption, message=display, color=shown)
    return badge_svg(data).replace('<svg ', '<svg' + attributes + ' ', 1)


def refresh(target, main, repo, compare=comparison):
    if not re.fullmatch(r'[0-9a-f]{40}', main):
        raise ValueError('freshness requires the full main revision')
    cache_path = target / 'freshness.json'
    previous = json.loads(cache_path.read_text()) if cache_path.exists() else {}
    ages, old = {}, previous.get('revisions', {})
    if previous.get('main') == main:
        ages = dict(old)
    elif previous.get('main'):
        delta = compare(repo, previous['main'], main)
        if delta['commits_behind'] is not None:
            # Reachable commits grow monotonically across a fast-forward.
            # One comparison advances every known ancestor, including merges.
            ages = {revision: dict(value, commits_behind=value['commits_behind'] + delta['commits_behind'],
                                   status='ahead' if value['commits_behind'] + delta['commits_behind'] else 'identical')
                    for revision, value in old.items() if value['commits_behind'] is not None}
    rows, replacements = [], {}
    for workload, host, metadata_path, paths, report in groups(target):
        metadata = json.loads(metadata_path.read_text()) if metadata_path.exists() else None
        age = None
        if metadata:
            revision = metadata['revision']
            if not re.fullmatch(r'[0-9a-f]{40}', revision):
                raise ValueError('invalid measured revision: ' + revision)
            if revision not in ages:
                ages[revision] = compare(repo, revision, main)
            age = ages[revision]
            rows.append(dict(workload=workload, host=host, revision=revision,
                             cpu=metadata['cpu'], report=str(report.relative_to(target)), **age))
        for path in sorted(paths):
            replacements[path] = render(path, CAPTIONS[host], metadata, age)
    # Validate every source and comparison before changing the retained badges.
    for path, text in replacements.items():
        path.write_text(text)
    cache_path.write_text(json.dumps(dict(schema=1, main=main, stale_commits=STALE_COMMITS,
                                         hidden_commits=HIDDEN_COMMITS, revisions=ages, measurements=rows),
                                    indent=2) + '\n')
    lines = ['# Benchmark measurement age', '',
             f'Compared with main [`{main[:9]}`](https://github.com/{repo}/commit/{main}).', '',
             f'An asterisk marks a result at least {STALE_COMMITS} commits behind main, or outside its history. '
             f'A gray `stale` badge replaces the speedup at {HIDDEN_COMMITS} commits behind main. '
             'Commit distance includes documentation and workflow changes; it does not establish a performance change. '
             'Missing measurements remain `n/m`. The metric value and its performance color are retained.', '',
             '| Workload | Host | CPU | Measured commit | Commit date (UTC) | Age | Results |',
             '|---|---|---|---|---|---|---|']
    for row in rows:
        count = row['commits_behind']
        age = f'{count} commits' if count is not None else 'outside main history'
        if count is not None and count >= HIDDEN_COMMITS:
            age += ' (stale badge)'
        revision = row['revision']
        cpu = row['cpu'].replace('|', '\\|').replace('\n', ' ')
        lines.append(f"| {row['workload']} | {CAPTIONS[row['host']]} | {cpu} | "
                     f"[`{revision[:9]}`](https://github.com/{repo}/commit/{revision}) | "
                     f"{row['measured_at']} | {age} | [Results]({row['report']}) |")
    (target / 'freshness.md').write_text('\n'.join(lines) + '\n')
    return rows


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('target', type=Path)
    parser.add_argument('--revision', required=True)
    parser.add_argument('--repo', default='vishvananda/cppgm')
    args = parser.parse_args()
    from publish_backend_benchmarks import seed as seed_backends
    from wasm_benchmark_results import seed
    for row in keep_newest(args.target, args.repo):
        print(f"{row['workload']} on {row['host']}: kept the measurement of {row['published']}; "
              f"{row['measured']} is its ancestor")
    seed(args.target)
    seed_backends(args.target)
    refresh(args.target, args.revision, args.repo)


if __name__ == '__main__':
    main()

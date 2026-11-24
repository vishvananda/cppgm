#!/usr/bin/env python3
"""Export both buildable source and the complete source tree of a release tag."""
import argparse
import gzip
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import tempfile


# The default build and the public LowIR library share these inputs.
BUILD_PATHS = (
    'AUTHORS', 'BUILDING.md', 'LICENSE', 'NOTICE', 'Makefile', 'scripts/test_run_id.mk',
    'dev/Makefile', ':(top,glob)dev/*.mk', 'dev/gen_builtin_host_config.pl',
    ':(top,glob)dev/*.cpp', ':(exclude,top,glob)dev/*-scaffold.cpp', 'dev/src', 'dev/runtime',
    'docs/lowir-library.md', 'third_party/core-math',
)


def write_archive(root, commit, tag, directory, variant, paths):
    archive = directory / f'cppgm-{tag}-{variant}.tar.gz'
    command = ['git', 'archive', '--format=tar', f'--prefix=cppgm-{tag}/', commit, '--', *paths]
    with archive.open('xb') as output:
        with gzip.GzipFile(filename='', mode='wb', fileobj=output, mtime=0) as compressed:
            with subprocess.Popen(command, cwd=root, stdout=subprocess.PIPE) as process:
                with process.stdout:
                    shutil.copyfileobj(process.stdout, compressed, 1024 * 1024)
                if process.wait():
                    raise RuntimeError('git archive failed')
    digest = hashlib.sha256()
    with archive.open('rb') as source:
        for chunk in iter(lambda: source.read(1024 * 1024), b''):
            digest.update(chunk)
    record = dict(schema=1, tag=tag, source_sha=commit, archive=archive.name, sha256=digest.hexdigest())
    (directory / f'{variant}-provenance.json').write_text(json.dumps(record, indent=2) + '\n')
    return archive.name


def export(root: Path, tag: str, destination: Path):
    if not re.fullmatch(r'v[0-9]+\.[0-9]+\.[0-9]+(?:-(?:rc|beta|alpha)[0-9]+)?', tag):
        raise ValueError('expected a release tag such as v0.9.0 or v1.2.3-rc1')
    commit = subprocess.check_output(['git', 'rev-parse', '--verify',
                                      'refs/tags/' + tag + '^{commit}'], cwd=root, text=True).strip()
    head = subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=root, text=True).strip()
    if commit != head:
        raise ValueError('check out the tagged commit before exporting a release')
    destination.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(dir=destination) as scratch:
        staged = Path(scratch)
        archives = [write_archive(root, commit, tag, staged, variant, paths)
                    for variant, paths in [('source', BUILD_PATHS), ('source-with-tests', ())]]
        installed = []
        try:
            for path in sorted(staged.iterdir()):
                target = destination / path.name
                os.link(path, target)
                installed.append(target)
        except OSError:
            for target in installed:
                target.unlink()
            raise
    return tuple(destination / name for name in archives)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--tag', required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    for archive in export(Path(__file__).resolve().parents[1], args.tag, args.output):
        print(archive)

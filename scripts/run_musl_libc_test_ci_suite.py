#!/usr/bin/env python3
"""Run the pinned hosted C pilot against cppgm and the same musl runtime."""
import argparse
import os
from pathlib import Path
import shutil
import subprocess
import sys
from urllib.request import urlopen

from upstream_dg_proxy import sha256, write_json


LIBC_TEST_REVISION = '63e36e934e8f2bedf645303a90b64098e2af6c8f'
MUSL_VERSION = '1.2.5'
MUSL_SHA256 = 'a9a118bbe84d8764da0ea0d28b3ab3fae8477fc7e4085d90102b8596fc7c75e4'
TESTS = (
    'clocale_mbfuncs', 'fnmatch', 'fscanf', 'fwscanf', 'inet_pton', 'mbc', 'memstream', 'pthread_tsd',
    'qsort', 'setjmp', 'snprintf', 'sscanf', 'strtod', 'strtof', 'strtold', 'tgmath', 'time', 'tls_init',
    'tls_local_exec', 'udiv', 'ungetc', 'wcsstr',
)


def run(command, **kwargs):
    subprocess.run(command, check=True, **kwargs)


def setup(work, gcc, workers, log):
    checkout = work / 'libc-test'
    run(['git', 'init', '-q', checkout], stdout=log, stderr=log)
    run(['git', '-C', checkout, 'fetch', '--depth=1', 'https://repo.or.cz/libc-test.git', LIBC_TEST_REVISION],
        stdout=log, stderr=log)
    run(['git', '-C', checkout, 'checkout', '--detach', LIBC_TEST_REVISION], stdout=log, stderr=log)

    archive = work / f'musl-{MUSL_VERSION}.tar.gz'
    with urlopen(f'https://musl.libc.org/releases/{archive.name}', timeout=60) as download, archive.open('wb') as out:
        shutil.copyfileobj(download, out)
    if sha256(archive) != MUSL_SHA256:
        raise ValueError('musl archive does not match the pinned digest')
    run(['tar', '-xzf', archive, '-C', work], stdout=log, stderr=log)
    source = work / f'musl-{MUSL_VERSION}'
    prefix = work / 'musl'
    run(['./configure', f'--prefix={prefix}', '--disable-shared'], cwd=source,
        env={**os.environ, 'CC': gcc}, stdout=log, stderr=log)
    run(['make', '-j', str(workers)], cwd=source, stdout=log, stderr=log)
    run(['make', 'install'], cwd=source, stdout=log, stderr=log)
    driver = prefix / 'bin/musl-gcc'

    support = work / 'support'
    archive = support / 'common/libtest.a'
    run(['make', '-j', str(workers), f'CC={driver}', f'B={support}', archive], cwd=checkout, stdout=log, stderr=log)
    shutil.copyfile(archive, prefix / 'lib/libtest.a')
    return checkout, driver


def manifest(checkout, include, gcc_include):
    def entry(path):
        return dict(path=path.relative_to(checkout).as_posix(), sha256=sha256(path))

    support = [entry(checkout / name) for name in ('Makefile', 'config.mak.def')]
    support.extend(entry(path) for path in sorted((checkout / 'src/common').glob('*.[ch]')))
    flags = ['-D_POSIX_C_SOURCE=200809L', '-D_FILE_OFFSET_BITS=64', '-fno-builtin', '-frounding-math']
    cases = []
    for test in TESTS:
        source = entry(checkout / 'src/functional' / (test + '.c'))
        for level in ('O0', 'O2'):
            args = [*flags, '-' + level]
            cases.append(dict(id=f'{test}-{level}', **source, dialect='c99', action='run', expect='accept',
                              include_directories=['src/common'], input_files=support, upstream_flags=args,
                              candidate_flags=['-nostdinc', '-isystem', str(include), '-isystem', gcc_include, *args],
                              link_flags=['-static', '-ltest', '-lpthread', '-lm', '-lrt']))
    lib = include.parent / 'lib'
    return dict(schema=1, suite='libc-test', language='c', edition=99, revision=LIBC_TEST_REVISION, cases=cases,
                runtime=dict(musl=MUSL_VERSION, source_sha256=MUSL_SHA256, libc_sha256=sha256(lib / 'libc.a'),
                             libtest_sha256=sha256(lib / 'libtest.a')),
                exclusions=[], coverage=f'{len(TESTS)} hosted functional cases at -O0 and -O2',
                limitations=[f'Both compilers link against the same static musl {MUSL_VERSION} and libtest.a.'])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--candidate', type=Path, required=True)
    parser.add_argument('--gcc', default='gcc-15')
    parser.add_argument('--upstream-version', required=True)
    parser.add_argument('--workers', type=int, default=2)
    parser.add_argument('--work', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.workers < 1:
        parser.error('workers must be positive')
    work = args.work.resolve()
    work.mkdir(parents=True)
    setup_log = args.output.with_name(args.output.name + '-setup.log')
    setup_log.parent.mkdir(parents=True, exist_ok=True)
    try:
        with setup_log.open('w') as log:
            checkout, driver = setup(work, args.gcc, args.workers, log)
    except (OSError, ValueError, subprocess.CalledProcessError):
        print(f'See musl and libc-test setup log at {setup_log}', file=sys.stderr)
        raise
    gcc_include = subprocess.check_output([args.gcc, '-print-file-name=include'], text=True).strip()
    manifest_path = work / 'manifest.json'
    write_json(manifest_path, manifest(checkout, driver.parent.parent / 'include', gcc_include))
    scripts = Path(__file__).resolve().parent
    run([sys.executable, scripts / 'run_cxx11_ci_suite.py', '--manifest', manifest_path,
         '--source-root', checkout, '--candidate', args.candidate.resolve(), '--upstream', driver,
         '--upstream-version', args.upstream_version, '--workers', str(args.workers), '--output', args.output],
        env={**os.environ, 'CPPGM_HOST_CC': args.gcc})


if __name__ == '__main__':
    main()

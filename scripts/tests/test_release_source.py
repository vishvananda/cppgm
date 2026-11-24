import hashlib
import importlib.util
import json
from pathlib import Path
import subprocess
import tarfile
import tempfile
import unittest

SPEC = importlib.util.spec_from_file_location('release_source', Path(__file__).resolve().parents[1] / 'export_release_source.py')
release = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(release)


class SourceRelease(unittest.TestCase):
    def test_archives_have_the_tagged_inputs_and_reproduce(self):
        build = {'AUTHORS', 'BUILDING.md', 'LICENSE', 'NOTICE', 'Makefile', 'scripts/test_run_id.mk',
                 'dev/Makefile', 'dev/frontend_source_sets.mk', 'dev/gen_builtin_host_config.pl',
                 'dev/cppgm.cpp', 'dev/src/driver/main.cpp', 'docs/lowir-library.md',
                 'dev/runtime/wasm-freestanding/Makefile', 'dev/runtime/wasm-freestanding/include/stdbit.h',
                 'dev/runtime/wasm-freestanding/include/string.h', 'dev/runtime/wasm-freestanding/stdbit.c',
                 'dev/runtime/wasm-freestanding/memset_explicit.c',
                 'dev/runtime/wasm-freestanding/licenses/wasi-libc-libc-top-half-musl-COPYRIGHT.txt',
                 'dev/runtime/wasi-c23/Makefile', 'dev/runtime/wasi-c23/include/time.h',
                 'dev/runtime/wasi-c23/include/uchar.h', 'dev/runtime/wasi-c23/timespec_getres.c',
                 'dev/runtime/wasi-c23/utf8.c', 'dev/runtime/wasi-c23/include/wchar.h',
                 'dev/runtime/wasi-c23/binary_conversion.c', 'dev/runtime/wasi-c23/sized_free.c',
                 'dev/runtime/wasi-c23/core_math_wasi.h', 'dev/runtime/wasi-c23/math_logp1.c',
                 'dev/runtime/wasi-c23/licenses/freebsd-log1pl.txt', 'third_party/core-math/NOTICE',
                 'third_party/core-math/binary32/sinpif.c', 'third_party/core-math/binary64/sinpi.c',
                 'third_party/core-math/binary128/rsqrtl.c', 'dev/runtime/wasi-c23/math_narrow.c',
                 'third_party/softfloat/COPYING.txt', 'third_party/softfloat/s_roundPackToF128.c'}
        extras = {'dev/cppgm-scaffold.cpp', 'pa1/tests/case.t', 'pa1/tests/case.ref',
                  'pa1/scripts/run_all_tests.pl', 'benchmarks/input.cpp', 'README.md'}
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)

            def git(*args):
                return subprocess.check_output(['git', *args], cwd=root, stderr=subprocess.DEVNULL)

            git('init', '-q')
            for name in build | extras:
                path = root / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_text('committed ' + name)
            git('add', '.')
            git('-c', 'user.name=Test', '-c', 'user.email=test@example.invalid', 'commit', '-qm', 'Source')
            git('tag', 'v0.9.1')
            (root / 'dev/cppgm.cpp').write_text('local edits')
            (root / 'untracked.secret').write_text('must not ship')
            first = release.export(root, 'v0.9.1', root / 'a')
            second = release.export(root, 'v0.9.1', root / 'b')
            for variant, expected_files, path, repeat in zip(
                    ['source', 'source-with-tests'], [build, build | extras], first, second, strict=True):
                with self.subTest(variant=variant):
                    self.assertEqual(path.name, f'cppgm-v0.9.1-{variant}.tar.gz')
                    self.assertEqual(path.read_bytes(), repeat.read_bytes())
                    with tarfile.open(path) as archive:
                        self.assertEqual({m.name for m in archive if m.isfile()},
                                         {'cppgm-v0.9.1/' + name for name in expected_files})
                        self.assertEqual(archive.extractfile('cppgm-v0.9.1/dev/cppgm.cpp').read(),
                                         b'committed dev/cppgm.cpp')
                    record = json.loads((path.parent / f'{variant}-provenance.json').read_text())
                    self.assertEqual(record, dict(schema=1, tag='v0.9.1', archive=path.name,
                                                 source_sha=git('rev-parse', 'HEAD').decode().strip(),
                                                 sha256=hashlib.sha256(path.read_bytes()).hexdigest()))
            partial = root / 'partial'
            partial.mkdir()
            existing = partial / 'source-with-tests-provenance.json'
            existing.write_text('earlier run')
            with self.assertRaises(FileExistsError):
                release.export(root, 'v0.9.1', partial)
            self.assertEqual(list(partial.iterdir()), [existing])
            self.assertEqual(existing.read_text(), 'earlier run')
            git('add', 'dev/cppgm.cpp')
            git('-c', 'user.name=Test', '-c', 'user.email=test@example.invalid', 'commit', '-qm', 'Later')
            with self.assertRaisesRegex(ValueError, 'tagged commit'):
                release.export(root, 'v0.9.1', root / 'c')

    def test_only_version_tags(self):
        for tag in ['main', 'reference-binaries', '../v0.9.0', 'v0.9.0;command', 'v0.9.0/foo', 'v8', 'v8.1',
                    'assignments-v9']:
            with self.assertRaises(ValueError):
                release.export(Path('/nonexistent'), tag, Path('/unused'))


if __name__ == '__main__':
    unittest.main()

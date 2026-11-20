#!/usr/bin/env python3
"""A release package holds the self-compiled tools, the LowIR library and its headers, with fixed bytes."""
import json
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import tarfile
import tempfile
import time
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import check_release_package as checker
import package_release as release

ROOT = Path(__file__).resolve().parents[2]


def tree(root):
    """A committed source tree with stand-ins for the files of scripts/build_release_tools.sh."""
    (root / 'dev/src/support').mkdir(parents=True)
    (root / 'dev/src/support/version.h').write_text('#pragma once\n#define CPPGM_VERSION "0.9.0"\n')
    stage = root / release.STAGE
    for directory, suffix in (('selfhost', '-self'), ('inception', '-inception')):
        (stage / 'bin' / directory).mkdir(parents=True)
        for tool in release.TOOLS:
            (stage / 'bin' / directory / (tool + suffix)).write_text('tool ' + tool)
    for name in ['libcppgm_lowir.a', 'libcppgm_lowir.so', 'libcppgm_lowir.dylib']:
        (root / 'dev' / name).write_text('library ' + name)
    (root / 'dev/.lowir-library-toolchain').write_text('%s\ng++\n' % (stage / 'bin/selfhost/cppgm-self'))
    (root / 'dev/src/lowir_interface.h').write_text('#include "lowir_records.h"\n#include <stdint.h>\n')
    (root / 'dev/src/lowir_records.h').write_text('#include "lowir_model.h"\n')
    (root / 'dev/src/lowir_model.h').write_text('// model\n')
    (root / 'dev/src/unrelated.h').write_text('// not part of the library interface\n')
    for name in ['LICENSE', 'NOTICE']:
        (root / name).write_text('committed ' + name)
    for arguments in (['init', '-q'], ['add', '-A'],
                      ['-c', 'user.name=Test', '-c', 'user.email=test@example.invalid', 'commit', '-qm', 'Source']):
        subprocess.run(['git', *arguments], cwd=root, check=True, stdout=subprocess.DEVNULL)


class PackageRelease(unittest.TestCase):
    def test_library_reuses_objects_and_relinks_when_their_root_changes(self):
        host = shutil.which('c++')
        make = shutil.which('make')
        if not host or not make:
            self.skipTest('a host C++ compiler and make are required')
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            (root / 'src').mkdir()
            (root / 'src/core.cpp').write_text('int core() { return 7; }\n')
            (root / 'src/api.cpp').write_text(
                'int core();\nextern "C" __attribute__((visibility("default"))) '
                'int cppgm_lowir_value() { return core(); }\n')
            (root / 'lowir_library.cpp').write_text('int library_boundary;\n')
            shutil.copyfile(ROOT / 'dev/lowir_library.mk', root / 'lowir_library.mk')
            (root / 'Makefile').write_text(
                'SRC=src\nOBJ=obj\nCC_FLAGS=-O0\nINC=-Isrc\n'
                'FRONTEND_LIBRARY_SOURCE_IDS_lowir_library=core api\n'
                'all_obj_basenames=core\nquiet=\nQ=@\n.PHONY: FORCE\nFORCE:\n'
                'include lowir_library.mk\n')
            compiler = root / 'compiler'
            compiler.write_text('#!' + sys.executable + '\nimport json, os, sys\n'
                                'with open(' + repr(str(root / 'commands')) + ', "a") as out:\n'
                                ' out.write(json.dumps(sys.argv[1:]) + "\\n")\n'
                                'os.execv(' + repr(host) + ', [' + repr(host) + '] + sys.argv[1:])\n')
            compiler.chmod(0o755)
            for name, value in [('third-stage', 7), ('other-stage', 9)]:
                (root / name).mkdir()
                subprocess.run([host, '-fPIC', '-x', 'c++', '-c', '-o', str(root / name / 'core.o'), '-'],
                               input='int core() { return %s; }' % value, text=True, check=True)

            def build(reuse):
                return subprocess.run([make, 'lowir-library', 'CXX=' + str(compiler),
                                       'CPPGM_HOST_CXX=' + host, 'LOWIR_LIBRARY_REUSE_OBJDIR=' + reuse],
                                      cwd=root, capture_output=True, text=True)

            def compiled():
                return [args for args in map(json.loads, (root / 'commands').read_text().splitlines())
                        if '-c' in args]

            (root / 'client.cpp').write_text(
                'extern "C" int cppgm_lowir_value();\nint main() { return cppgm_lowir_value(); }\n')

            def result(library):
                subprocess.run([host, str(root / 'client.cpp'), str(root / library), '-o', str(root / 'client')],
                               check=True)
                return subprocess.run([str(root / 'client')]).returncode

            first = build('third-stage')
            self.assertEqual(first.returncode, 0, first.stdout + first.stderr)
            self.assertEqual(len(compiled()), 2)  # API and boundary, with no duplicate core compile.
            shared = 'libcppgm_lowir.dylib' if sys.platform == 'darwin' else 'libcppgm_lowir.so'
            # A shared client locates the library's install name / soname at runtime.
            shared_result = subprocess.check_output(
                [sys.executable, '-c', 'import ctypes, sys; print(ctypes.CDLL(sys.argv[1]).cppgm_lowir_value())',
                 str(root / shared)], text=True).strip()
            self.assertEqual(shared_result, '7')
            self.assertEqual(result('libcppgm_lowir.a'), 7)
            self.assertEqual(build('third-stage').returncode, 0)
            self.assertEqual(len(compiled()), 2)
            # Both roots predate the libraries: the toolchain stamp must force a relink.
            time.sleep(1.1)  # Apple make 3.81 compares mtimes at whole-second precision.
            self.assertEqual(build('other-stage').returncode, 0)
            self.assertEqual(result('libcppgm_lowir.a'), 9)
            self.assertEqual(len(compiled()), 2)
            (root / 'other-stage/core.o').unlink()
            self.assertNotEqual(build('other-stage').returncode, 0)
            time.sleep(1.1)
            self.assertEqual(build('').returncode, 0)  # Ordinary builds still compile their own core.
            self.assertEqual(len(compiled()), 3)
            self.assertEqual(result('libcppgm_lowir.a'), 7)

    def test_package_is_reproducible_and_complete(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            tree(root)
            first = release.package(root, 'v0.9.0', 'linux-x86_64', root / 'a', 'g++ 13')
            second = release.package(root, 'v0.9.0', 'linux-x86_64', root / 'b', 'g++ 13')
            self.assertEqual(first.name, 'cppgm-v0.9.0-linux-x86_64.tar.gz')
            self.assertEqual(first.read_bytes(), second.read_bytes())
            with tarfile.open(first) as archive:
                names = {member.name[len('cppgm-v0.9.0-linux-x86_64/'):]: member for member in archive.getmembers()}
                text = archive.extractfile('cppgm-v0.9.0-linux-x86_64/README.md').read().decode()
            self.assertEqual(set(names), checker.required('linux-x86_64') |
                             {'include/lowir_records.h', 'include/lowir_model.h'})
            self.assertEqual(names['bin/cppgm'].mode, 0o755)
            self.assertEqual(names['lib/libcppgm_lowir.a'].mode, 0o644)
            self.assertEqual({member.mtime for member in names.values()}, {0})
            self.assertIn('g++ 13', text)
            self.assertIn('Compiler of the tools and the library: cppgm at this revision', text)
            record = json.loads((root / 'a/cppgm-v0.9.0-linux-x86_64-provenance.json').read_text())
            self.assertEqual(record['source_sha'],
                             subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=root, text=True).strip())
            self.assertEqual(record['compiler'], 'cppgm ' + record['source_sha'])
            self.assertEqual(record['host_compiler'], 'g++ 13')
            self.assertEqual(sorted(record['files']), sorted(names))
            with self.assertRaises(FileExistsError):
                release.package(root, 'v0.9.0', 'linux-x86_64', root / 'a', 'g++ 13')
            mac = release.package(root, 'v0.9.0', 'macos-x86_64', root / 'c', 'clang 21')
            with tarfile.open(mac) as archive:
                self.assertIn('cppgm-v0.9.0-macos-x86_64/lib/libcppgm_lowir.dylib', archive.getnames())
            # A release tag is the source version; a pull request's trial tag names no release.
            with self.assertRaisesRegex(ValueError, 'the tag v0.9.5 is not the source version v0.9.0'):
                release.package(root, 'v0.9.5', 'linux-x86_64', root / 'd', 'g++ 13')
            release.package(root, release.TRIAL_TAG, 'linux-x86_64', root / 'd', 'g++ 13')

    def test_missing_build_output_and_other_names_are_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            tree(root)
            (root / release.STAGE / 'bin/selfhost/lowiropt-self').unlink()
            with self.assertRaisesRegex(FileNotFoundError, 'lowiropt-self'):
                release.package(root, 'v0.9.0', 'linux-x86_64', root / 'a', 'g++ 13')
            for tag in ['v9', 'v8.1', 'assignments-v9', 'main', '../v0.9.0', 'v0.9.0;command']:
                with self.assertRaises(ValueError):
                    release.package(root, tag, 'linux-x86_64', root / 'b', 'g++ 13')
            with self.assertRaisesRegex(ValueError, 'platform'):
                release.package(root, 'v0.9.0', 'windows-x86_64', root / 'b', 'g++ 13')

    def test_only_a_self_compiled_build_is_packaged(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            tree(root)
            stage = root / release.STAGE
            # A host compiler's build in dev/ is not a package input.
            for tool in release.TOOLS:
                (root / 'dev' / tool).write_text('host build of ' + tool)
            with tarfile.open(release.package(root, 'v0.9.0', 'linux-x86_64', root / 'a', 'g++ 13')) as archive:
                self.assertEqual(archive.extractfile('cppgm-v0.9.0-linux-x86_64/bin/preproc').read(), b'tool preproc')
            (stage / 'bin/inception/preproc-inception').write_text('another build')
            with self.assertRaisesRegex(ValueError, 'preproc: the second-stage and third-stage builds differ'):
                release.package(root, 'v0.9.0', 'linux-x86_64', root / 'b', 'g++ 13')
            (stage / 'bin/inception/preproc-inception').write_text('tool preproc')
            (stage / 'bin/inception/abimangle-inception').unlink()
            with self.assertRaisesRegex(FileNotFoundError, 'abimangle-inception'):
                release.package(root, 'v0.9.0', 'linux-x86_64', root / 'b', 'g++ 13')
            (stage / 'bin/inception/abimangle-inception').write_text('tool abimangle')
            for text in ('g++\ng++\n', '../cppgm\ng++\n', ''):
                (root / 'dev/.lowir-library-toolchain').write_text(text)
                with self.assertRaisesRegex(ValueError, "not a build of the stage's cppgm"):
                    release.package(root, 'v0.9.0', 'linux-x86_64', root / 'b', 'g++ 13')
            (root / 'dev/.lowir-library-toolchain').unlink()
            with self.assertRaisesRegex(ValueError, 'no build record'):
                release.package(root, 'v0.9.0', 'linux-x86_64', root / 'b', 'g++ 13')
            # The record may name the compiler from the dev directory.
            (root / 'dev/.lowir-library-toolchain').write_text('../obj/release/bin/selfhost/cppgm-self\ng++\n')
            release.package(root, 'v0.9.0', 'linux-x86_64', root / 'b', 'g++ 13')

    def test_architecture_checks_reject_mislabeled_binaries(self):
        def elf(machine):
            return b'\x7fELF\x02\x01' + bytes(12) + struct.pack('<H', machine)

        def macho(machine):
            return b'\xcf\xfa\xed\xfe' + struct.pack('<I', machine)

        headers = {'linux-x86_64': elf(62), 'linux-aarch64': elf(183),
                   'macos-x86_64': macho(0x01000007), 'macos-arm64': macho(0x0100000c)}
        with tempfile.TemporaryDirectory() as directory:
            binary = Path(directory, 'binary')
            for target, header in headers.items():
                binary.write_bytes(header)
                checker.check_architecture(binary, target)
                for other in headers.keys() - {target}:
                    with self.assertRaisesRegex(ValueError, 'does not target ' + other):
                        checker.check_architecture(binary, other)
                binary.write_bytes(header[:-1])
                with self.assertRaisesRegex(ValueError, 'does not target ' + target):
                    checker.check_architecture(binary, target)

    def test_workflow_releases_semantic_versions_with_four_native_packages_and_wasi(self):
        workflow = (ROOT / '.github/workflows/release.yml').read_text()
        self.assertIn("tags: ['v[0-9]+.[0-9]+.[0-9]+', 'v[0-9]+.[0-9]+.[0-9]+-*']", workflow)
        self.assertNotIn("'v[0-9]*'", workflow)
        for part in ('platform: linux-x86_64', 'platform: linux-aarch64', 'platform: macos-x86_64',
                     'platform: macos-arm64', 'runner: ubuntu-24.04-arm', 'runner: macos-15',
                     'export-wasm-references.yml',
                     'scripts/export_release_source.py', 'scripts/check_release_package.py', 'macos-26-intel',
                     'bash scripts/build_release_tools.sh g++', 'bash scripts/build_release_tools.sh "$CPPGM_HOST_CXX"',
                     'gh release create'):
            self.assertIn(part, workflow)
        # Only a tag push publishes; a pull request builds and checks the same packages.
        self.assertIn("if: github.event_name == 'push'", workflow)


if __name__ == '__main__':
    unittest.main()

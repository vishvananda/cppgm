#!/usr/bin/env python3
"""The LowIR library's ABI version 3 additions: metadata, argument facts, assembly templates and debug information.

The client builds one module through the C interface. The library's object must equal the object that cppgm
makes from the text the library writes, and the program linked from it must run.
"""
import os
from pathlib import Path
import platform
import re
import shlex
import shutil
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]
DEV = ROOT / 'dev'
LIBRARY = DEV / 'libcppgm_lowir.a'
COMPILER = DEV / 'cppgm'
CLIENT = ROOT / 'scripts/tests/lowir_library_extensions.c'
HOST = ROOT / 'scripts/tests/lowir_library_extensions_host.c'
LINUX, MACOS = 0, 1
# What the written text states for each addition.
TEXT = (
    'classes=sse_integer', 'return=noreturn', 'unwind=no', 'arity=variadic', 'object=pair_sum', 'cold=yes',
    'no_inline=yes', 'no_builtin=yes', 'storage=readonly', 'classes=1:sse_integer', 'argument_type=2:i32', 'assembly @',
    'asm @', '!dbg(ext.c, 11, 5, 1)', '!dbg(ext.c, 12, 12, 2)', 'debug_type 5 ', 'debug_scope 2 ', 'debug_local ',
)
# Each bad record, and words of the error that reports it.
REJECTED = {
    'bad-file': 'debug file name is one token',
    'bad-pass': 'non-direct passing requires ptr',
    'bad-classes': 'invalid classes metadata',
    'bad-role': 'function role on global|invalid symbol role',
    'bad-symbol-fact': 'requires a declared function or global',
    'bad-section': 'invalid global section name',
    'bad-assembly': 'invalid assembly alternative',
    'bad-assembly-argument': 'assembly invocation argument type mismatch',
    'bad-argument-fact': 'argument fact does not name a call argument',
    'bad-location': "line and column count from 1",
    'bad-location-index': '1 \\+ a position in the list',
    'bad-debug-parent': 'undefined debug parent or type \\(debug type 3\\)',
    'bad-debug-kind': 'debug parent cannot contain children \\(debug type 4\\)',
    'bad-debug-slot': 'undefined debug local slot or type \\(function @ext_pair_sum\\)',
}


def run(args, **options):
    return subprocess.run([str(a) for a in args], cwd=ROOT, timeout=120, text=True, stdout=subprocess.PIPE,
                          stderr=subprocess.STDOUT, **options)


def release():
    return re.search(r'#define CPPGM_VERSION "([^"]+)"', (DEV / 'src/support/version.h').read_text()).group(1)


@unittest.skipUnless(platform.machine().lower() in ('x86_64', 'amd64'), 'the library makes x86-64 objects')
@unittest.skipUnless(LIBRARY.is_file() and COMPILER.is_file(), 'build dev/cppgm and the LowIR library first')
class LibraryExtensionsTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.directory = tempfile.TemporaryDirectory(prefix='cppgm-library-extensions-')
        cls.out = Path(cls.directory.name)
        cls.cc = shlex.split(os.environ.get('CC', 'cc'))
        cxx = shlex.split(os.environ.get('CPPGM_HOST_CXX', os.environ.get('CXX', 'g++')))
        stdlib = shlex.split(os.environ.get('CPPGM_STDLIB_FLAGS', ''))
        cls.client = cls.out / 'client'
        built = run([*cls.cc, '-std=c11', '-Wall', '-Wextra', '-Werror', '-I', DEV / 'src', '-c', CLIENT, '-o',
                     cls.out / 'client.o'])
        assert built.returncode == 0, built.stdout
        linked = run([*cxx, *stdlib, cls.out / 'client.o', LIBRARY, '-pthread', '-o', cls.client])
        assert linked.returncode == 0, linked.stdout
        cls.host_target = MACOS if platform.system() == 'Darwin' else LINUX

    @classmethod
    def tearDownClass(cls):
        cls.directory.cleanup()

    def client_run(self, name, level, case, target):
        return run([self.client, self.out / (name + '.o'), self.out / (name + '.lowir'), level, case, target,
                    release()])

    def objects(self, level, target):
        """The library's object for `target` and the object cppgm makes from the written text."""
        name = 'direct-%d-%d' % (target, level)
        result = self.client_run(name, level, 'valid', target)
        self.assertEqual(result.returncode, 0, result.stdout)
        text = self.out / (name + '.lowir')
        from_text = self.out / ('text-%d-%d.o' % (target, level))
        triple = ['--target=x86_64-apple-darwin'] if target == MACOS else ['--target=x86_64-linux-gnu']
        compiled = run([COMPILER, *triple, '-O%d' % level, '-c', text, '-o', from_text])
        self.assertEqual(compiled.returncode, 0, compiled.stdout)
        return self.out / (name + '.o'), from_text, text.read_text()

    def test_objects_equal_the_text_path_and_run(self):
        for level in range(4):
            direct, from_text, text = self.objects(level, self.host_target)
            self.assertEqual(direct.read_bytes(), from_text.read_bytes(), 'level %d' % level)
            for words in TEXT:
                self.assertIn(words, text)
            program = self.out / 'program'
            linked = run([*self.cc, HOST, direct, '-o', program])
            self.assertEqual(linked.returncode, 0, linked.stdout)
            self.assertEqual(run([program]).returncode, 0, 'level %d' % level)

    def test_objects_of_the_other_target_equal_the_text_path(self):
        other = LINUX if self.host_target == MACOS else MACOS
        for level in (0, 3):
            direct, from_text, _ = self.objects(level, other)
            self.assertEqual(direct.read_bytes(), from_text.read_bytes(), 'level %d' % level)

    def test_bad_records_are_rejected(self):
        for case, message in REJECTED.items():
            result = self.client_run(case, 0, case, self.host_target)
            self.assertEqual(result.returncode, 0, case + ': ' + result.stdout)
            self.assertRegex(result.stdout, message, case)

    def test_a_version_2_client_creates_a_module(self):
        result = self.client_run('version-2', 0, 'version-2', self.host_target)
        self.assertEqual(result.returncode, 0, result.stdout)

    @unittest.skipUnless(shutil.which('readelf'), 'reads the ELF object with readelf')
    def test_the_object_holds_debug_information(self):
        direct, _, _ = self.objects(0, LINUX)
        dump = run(['readelf', '--debug-dump=info,decodedline', direct])
        self.assertEqual(dump.returncode, 0, dump.stdout)
        for words in ('DW_TAG_structure_type', 'Pair', 'DW_TAG_member', 'DW_TAG_lexical_block', 'DW_TAG_variable',
                      'ext.c'):
            self.assertIn(words, dump.stdout)


if __name__ == '__main__':
    unittest.main()

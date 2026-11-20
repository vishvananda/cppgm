#!/usr/bin/env python3
"""The advisory review must fail closed on incomplete or misleading B2 runs."""
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
import xml.etree.ElementTree as ET

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import boost_ci
import boost_ci_toolchain
import run_boost_language_replay


class ReviewTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.project = 'libs/type_erasure/test'

    def fixture(self, kind='COMPILE', returncode=0, route='cppgm', name='example.test',
                build_prefix='build/boost/bin.v2'):
        build = self.root / build_prefix / self.project / name / 'gcc-cppgm/debug'
        build.mkdir(parents=True, exist_ok=True)
        marker = build / name
        marker.write_text('passed\n')
        tree = ET.Element('build')
        ET.SubElement(tree, 'directory').text = str(self.root)
        test = ET.SubElement(tree, 'test', type=kind, name='example')
        ET.SubElement(test, 'target').text = self.project + '//' + name
        ET.SubElement(test, 'source').text = 'test.cpp'
        action = ET.SubElement(tree, 'action', status='0')
        ET.SubElement(action, 'name').text = 'testing%testing.expect-' + ('failure' if kind.endswith('_FAIL') else 'success')
        ET.SubElement(action, 'path').text = str(marker)
        call = dict(cwd=str(self.root), route=route, compiler='/compiler',
                    args=['-c', 'test.cpp', '-o', str(build / 'test.o')], returncode=returncode)
        self.calls = [call]
        self.tree, self.marker = tree, marker
        self.log = self.root / 'b2.log'
        self.log.write_text('')

    def check(self):
        xml = self.root / 'b2.xml'
        ET.ElementTree(self.tree).write(xml)
        calls = self.root / 'invocations.jsonl'
        calls.write_text(''.join(json.dumps(c) + '\n' for c in self.calls))
        return boost_ci.review(xml, self.log, calls, self.project, 1)

    def test_positive_and_actual_negative(self):
        for kind, code in [('COMPILE', 0), ('COMPILE_FAIL', 1)]:
            with self.subTest(kind=kind):
                self.fixture(kind, code)
                self.assertEqual(self.check()['passed'], 1)

    def test_negative_that_compiles_is_failure(self):
        self.fixture('COMPILE_FAIL', 0)
        with self.assertRaisesRegex(ValueError, 'incorrect compilation'):
            self.check()

    def test_failed_b2_target_is_reported_before_binary_xml_output(self):
        xml = self.root / 'b2.xml'
        xml.write_bytes(b'<build>test output: \xff\x00</build>')
        log = self.root / 'b2.log'
        log.write_bytes(b'test output: \xff\x00\n...failed updating 1 target...\n')
        with self.assertRaisesRegex(ValueError, 'B2 reported failed targets'):
            boost_ci.review(xml, log, self.root / 'invocations.jsonl', self.project, 1)

    def test_zero_failed_b2_targets_keeps_the_reviewed_outcome(self):
        self.fixture()
        self.log.write_text('...failed updating 0 target...\n')
        self.assertEqual(self.check()['passed'], 1)

    def test_compiler_crash_is_not_an_expected_rejection(self):
        for code in [-11, 70, 139]:
            with self.subTest(code=code):
                self.fixture('COMPILE_FAIL', code)
                with self.assertRaisesRegex(ValueError, 'compiler crash'):
                    self.check()

    def test_host_cpp_cannot_validate_cppgm(self):
        self.fixture(route='host-c')
        with self.assertRaisesRegex(ValueError, 'no cppgm compilation'):
            self.check()

    def test_missing_declaration(self):
        self.fixture()
        self.tree.remove(self.tree.find('test'))
        with self.assertRaisesRegex(ValueError, 'expected 1 declarations'):
            self.check()

    def test_nested_project_declarations_are_reviewed(self):
        self.project = 'libs/asio/test/execution'
        self.fixture()
        self.project = 'libs/asio/test'
        self.assertEqual(self.check()['passed'], 1)

    def test_project_own_build_directory_keeps_its_marker(self):
        self.project = 'libs/gil/test/extension/io'
        self.fixture(name='simple_all_formats.test', build_prefix='build')
        self.assertEqual(self.check()['passed'], 1)

    def test_similarly_named_sibling_is_not_included(self):
        self.project = 'libs/asio/testing'
        self.fixture()
        self.project = 'libs/asio/test'
        with self.assertRaisesRegex(ValueError, 'expected 1 declarations'):
            self.check()

    def test_missing_or_duplicate_expectation(self):
        self.fixture()
        self.tree.remove(self.tree.find('action'))
        with self.assertRaisesRegex(ValueError, 'missing or duplicate'):
            self.check()
        self.fixture()
        self.tree.append(self.tree.find('action'))
        with self.assertRaisesRegex(ValueError, 'missing or duplicate'):
            self.check()

    def test_b2_zero_exit_with_failed_build_summary(self):
        self.fixture()
        self.log.write_text('...failed updating 1 target...\n')
        with self.assertRaisesRegex(ValueError, 'B2 reported failed'):
            self.check()

    def test_native_requires_exit_status_and_capture(self):
        self.fixture('RUN')
        self.marker.with_suffix('.output').write_text('EXIT STATUS: 1\n')
        with self.assertRaisesRegex(ValueError, 'incorrect native result'):
            self.check()
        self.marker.with_suffix('.output').write_text('EXIT STATUS: 0\n')
        with self.assertRaisesRegex(ValueError, 'no actual execution'):
            self.check()
        action = ET.SubElement(self.tree, 'action', status='0')
        ET.SubElement(action, 'name').text = 'testing%testing.capture-output'
        ET.SubElement(action, 'path').text = str(self.marker.with_suffix('.run'))
        self.assertEqual(self.check()['counts'], {'RUN': 1})

    def test_mpi_requires_a_successful_launch_at_the_declared_rank_count(self):
        self.fixture('RUN_MPI', name='example-4.test')
        run = self.marker.with_name('example-4-run')
        output = run.with_suffix('.output')
        output.write_text('EXIT STATUS: 0\n')
        with self.assertRaisesRegex(ValueError, 'no actual MPI execution'):
            self.check()
        action = ET.SubElement(self.tree, 'action', status='0')
        ET.SubElement(action, 'name').text = 'mpi%mpi.capture-output'
        ET.SubElement(action, 'path').text = str(run)
        command = ET.SubElement(action, 'command')
        executable = self.marker.with_suffix('')
        command.text = f'mpirun --oversubscribe -np 2 "{executable}" > "{output}"'
        with self.assertRaisesRegex(ValueError, 'incorrect MPI launch'):
            self.check()
        command.text = f'mpirun --oversubscribe -np 4 "{executable}" > "{output}"'
        row, = self.check()['tests']
        self.assertEqual((row['mpi_ranks'], row['native_status']), (4, 0))
        output.write_text('EXIT STATUS: 1\n')
        with self.assertRaisesRegex(ValueError, 'incorrect MPI result'):
            self.check()

    def test_standalone_python_requires_actual_execution_without_extension_dependencies(self):
        self.project = 'libs/pfr/test/core'
        self.fixture('RUN_PYD')
        source = 'libs/pfr/misc/example.py'
        self.tree.find('test/source').text = source
        self.calls[0]['args'][-1] = str(self.root / 'unrelated.o')
        target = self.project + '//example.test'
        run_target = target.removesuffix('.test')
        targets = ET.SubElement(self.tree, 'targets')
        for name, dependency in [(target, run_target), (run_target, self.project + '//../../misc/example.py')]:
            entry = ET.SubElement(targets, 'target')
            ET.SubElement(entry, 'name').text = name
            dependencies = ET.SubElement(entry, 'dependencies')
            ET.SubElement(dependencies, 'dependency').text = dependency
        self.marker.with_suffix('.output').write_text('EXIT STATUS: 0\n')
        with self.assertRaisesRegex(ValueError, 'no actual Python execution'):
            self.check()
        action = ET.SubElement(self.tree, 'action', status='0')
        ET.SubElement(action, 'name').text = 'python%python.capture-output'
        ET.SubElement(action, 'path').text = str(self.marker.with_suffix(''))
        ET.SubElement(action, 'command').text = f'PYTHONPATH=""\n"/usr/bin/python3" "{source}"\n'
        result = self.check()
        row, = result['tests']
        self.assertEqual((row['sources'], row['native_status']), ([], 0))
        with self.assertRaisesRegex(ValueError, 'unrecorded language build variant'):
            run_boost_language_replay.test_inventory(result, {target}, 14)
        properties = ET.SubElement(self.tree.find('action'), 'properties')
        ET.SubElement(properties, 'property', name='cxxstd').text = '14'
        self.assertEqual(run_boost_language_replay.test_inventory(self.check(), {target}, 14),
                         {(target, 'RUN_PYD', ()): 1})
        ET.SubElement(dependencies, 'dependency').text = self.project + '//extension'
        with self.assertRaisesRegex(ValueError, 'unreviewed Python dependencies'):
            self.check()

    def test_json_requires_debugger_execution(self):
        self.project = 'libs/json/test'
        self.fixture('RUN', name='_gdb-printers.test')
        self.marker.with_suffix('.output').write_text('EXIT STATUS: 0\n')
        action = ET.SubElement(self.tree, 'action', status='0')
        ET.SubElement(action, 'name').text = 'testing%testing.capture-output'
        ET.SubElement(action, 'path').text = str(self.marker.with_suffix('.run'))
        command = ET.SubElement(action, 'command')
        command.text = './ordinary-native-program'
        with self.assertRaisesRegex(ValueError, 'did not execute GDB'):
            self.check()
        command.text = '/generated/boost-ci-gdb --batch-silent -x _test.py ./program'
        self.assertEqual(self.check()['passed'], 1)

    def test_python_extension_must_link_the_candidate_object_and_execute(self):
        self.fixture('RUN_PYD')
        source = self.project + '/example.py'
        native = self.project + '/example.cpp'
        self.tree.find('test/source').text = source
        ET.SubElement(self.tree.find('test'), 'source').text = native
        ET.SubElement(self.tree.find('test'), 'source').text = self.project + '/imported_helper.py'
        self.calls[0]['args'][1] = native
        target = self.project + '//example.test'
        run_target = target.removesuffix('.test')
        module = 'example_ext.so'
        targets = ET.SubElement(self.tree, 'targets')
        for name, required in [(target, [run_target]),
                               (run_target, [self.project + '//example.py', self.project + '//' + module])]:
            entry = ET.SubElement(targets, 'target')
            ET.SubElement(entry, 'name').text = name
            dependencies = ET.SubElement(entry, 'dependencies')
            for dependency in required:
                ET.SubElement(dependencies, 'dependency').text = dependency
        extension = self.marker.parent.parent / 'extensions' / module
        extension.parent.mkdir()
        extension.touch()
        self.calls[0]['args'][-1] = str(extension.with_suffix('.o'))
        link = ET.SubElement(self.tree, 'action', status='0')
        ET.SubElement(link, 'name').text = 'gcc%gcc.link.dll'
        ET.SubElement(link, 'path').text = str(extension)
        action = ET.SubElement(self.tree, 'action', status='0')
        ET.SubElement(action, 'name').text = 'python%python.capture-output'
        ET.SubElement(action, 'path').text = str(self.marker.with_suffix(''))
        command = ET.SubElement(action, 'command')
        command.text = f'PYTHONPATH="{extension.parent}"\n"/usr/bin/python3" "{source}"\n'
        self.marker.with_suffix('.output').write_text('EXIT STATUS: 0\n')
        with self.assertRaisesRegex(ValueError, 'no recorded extension link'):
            self.check()
        self.calls.append(dict(cwd=str(self.root), route='host-link-or-query',
                               args=['unrelated.o', '-o', str(extension)], returncode=0))
        with self.assertRaisesRegex(ValueError, 'extension link did not use'):
            self.check()
        self.calls[-1]['args'][0] = self.calls[0]['args'][-1]
        row, = self.check()['tests']
        self.assertEqual((row['sources'], row['python_extensions'], row['native_status']),
                         ([self.calls[0]['args']], [module], 0))
        command.text = command.text.replace(str(extension.parent), '/unrelated')
        with self.assertRaisesRegex(ValueError, 'no recorded extension link'):
            self.check()

    def test_cpp_response_files_are_expanded(self):
        response = self.root / 'args.rsp'
        response.write_text('-std=c++11 -c "file with spaces.cpp" -o output.o')
        self.assertEqual(boost_ci_toolchain.expand(['@' + str(response)]),
                         ['-std=c++11', '-c', 'file with spaces.cpp', '-o', 'output.o'])

    def test_shared_python_keeps_the_library_order_and_other_static_libraries(self):
        flags = ['-Wl,--start-group,-Bstatic', '-lboost_mpi', '-lpython3.14', '-ldl', '-Wl,--end-group']
        self.assertEqual(boost_ci_toolchain.shared_python_link(flags),
                         [*flags[:2], '-Wl,--push-state,-Bdynamic', flags[2], '-Wl,--pop-state', *flags[3:]])

    def test_gdb_launcher_keeps_the_executable_and_times_once_in_either_order(self):
        fake = self.root / 'fake-gdb'
        received = self.root / 'gdb-arguments.json'
        fake.write_text('#!/usr/bin/env python3\nimport json,os,sys\n'
                        'open(os.environ["GDB_ARGS"],"w").write(json.dumps(sys.argv[1:]))\n')
        fake.chmod(0o755)
        timer = Path(boost_ci.__file__).with_name('boost_ci_execute.py').resolve()
        for outer in (False, True):
            with self.subTest(outer=outer):
                directory = self.root / str(outer)
                directory.mkdir()
                boost_ci.setup(self.root, directory, gdb_executable=fake)
                shim = directory / 'boost-ci-gdb'
                log = directory / 'native.jsonl'
                args = ['-batch', '-x', 'printers.py', '/build/test-executable']
                command = ([timer, shim, *args] if outer else
                           [shim, *args[:-1], timer, args[-1]])
                env = dict(os.environ, BOOST_CI_RUNTIME_INVOCATIONS=str(log), GDB_ARGS=str(received))
                env.pop('BOOST_CI_TIMER_ACTIVE', None)
                result = subprocess.run(command, env=env)
                self.assertEqual(result.returncode, 0)
                actual = json.loads(received.read_text())
                self.assertEqual(actual[-len(args):], args)
                self.assertNotIn(str(timer), actual)
                self.assertEqual(len(log.read_text().splitlines()), 1)

    def test_response_file_reaches_cpp_compiler_as_arguments(self):
        received = self.root / 'received.json'
        compiler = self.root / 'compiler'
        compiler.write_text('#!/usr/bin/python3\nimport json,os,sys\n'
                            'open(os.environ["RECEIVED_ARGS"], "w").write(json.dumps(sys.argv[1:]))\n')
        compiler.chmod(0o755)
        response = self.root / 'args.rsp'
        response.write_text('-std=c++11 -c "file with spaces.cpp" -o output.o')
        log = self.root / 'invocations.jsonl'
        env = dict(os.environ, BOOST_CI_COMPILER=str(compiler), BOOST_CI_HOST_CC=str(compiler),
                   BOOST_CI_HOST_CXX=str(compiler), BOOST_CI_INVOCATIONS=str(log), RECEIVED_ARGS=str(received))
        result = subprocess.run([sys.executable, boost_ci_toolchain.__file__, '@' + str(response)], env=env)
        self.assertEqual(result.returncode, 0)
        self.assertEqual(json.loads(received.read_text()),
                         ['-std=c++11', '-c', 'file with spaces.cpp', '-o', 'output.o'])
        self.assertEqual(json.loads(log.read_text())['route'], 'cppgm')


if __name__ == '__main__':
    unittest.main()

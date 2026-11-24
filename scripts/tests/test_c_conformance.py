import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from c_library_headers import current_version_token, edition_headers, version_tokens
from c_conformance import coverage, evidence_key, inventory, library_sources, read_evidence, run_stages, INVENTORY


class CoverageTests(unittest.TestCase):
    def setUp(self):
        self.profiles, self.rules = inventory(INVENTORY)
        self.native = 'linux-x86_64-hosted'

    def test_all_limits_and_target_specific_receipts(self):
        self.assertEqual(sum(name.startswith('limits.') and 'limits.combined' in rule['cases']
                             for name, rule in self.rules.items()), 22)
        for rule in self.rules.values():
            if 'limits.combined' in rule['cases']:
                self.assertEqual(set(rule['editions']), {90, 95, 99, 11, 17, 23})
        receipts = {('limits.combined', self.native, edition, opt): 'passed'
                    for edition in (90, 99, 23) for opt in ('O0', 'O2')}
        rows = {(r['rule'], r['edition'], r['profile']): r['status']
                for r in coverage(self.profiles, self.rules, receipts)}
        self.assertEqual(rows[('limits.block-depth', 90, self.native)], 'passing')
        self.assertEqual(rows[('limits.block-depth', 95, self.native)], 'uncovered')
        self.assertEqual(rows[('limits.block-depth', 99, self.native)], 'passing')
        self.assertEqual(rows[('limits.block-depth', 11, self.native)], 'uncovered')
        self.assertEqual(rows[('limits.block-depth', 99, 'wasi-hosted')], 'uncovered')
        self.assertEqual(rows[('limits.object-size', 99, 'wasm-freestanding')], 'inapplicable')
        self.assertEqual(rows[('limits.object-size', 23, self.native)], 'passing')
        self.assertEqual(rows[('limits.block-depth', 23, 'wasi-hosted')], 'uncovered')
        self.assertEqual(rows[('limits.object-size', 23, 'wasm-freestanding')], 'inapplicable')
        self.assertEqual(rows[('limits.numeric-macros', 99, self.native)], 'uncovered')

    def test_native_rounding_query_uses_target_applicability(self):
        rule = {'limits.native-rounding-query': self.rules['limits.native-rounding-query']}
        rows = {r['profile']: r for r in coverage(self.profiles, rule, {}) if r['edition'] == 99}
        self.assertEqual(rows[self.native]['status'], 'uncovered')
        self.assertEqual(rows['wasi-hosted']['status'], 'inapplicable')
        self.assertIn('Wasm selects round-to-nearest', rows['wasi-hosted']['reason'])

    def test_header_scope_and_disabled_macro(self):
        self.assertEqual(len(dict(edition_headers(90, 'hosted'))), 15)
        hosted = dict(edition_headers(23, 'hosted'))
        freestanding = dict(edition_headers(23, 'freestanding'))
        self.assertEqual(len(hosted), 31)
        self.assertEqual(freestanding['stdbit'], hosted['stdbit'])
        self.assertNotIn('stdckdint', freestanding)
        self.assertEqual(freestanding['stdlib'], 'library.freestanding-header.stdlib')
        rules = {name: self.rules[name] for name in ('library.header.threads', 'library.header.stdbit',
                                                    'library.header-version.stddef')}
        checked = {(self.native, 23): {
            'threads': {'include': 'disabled', 'macro': '__STDC_NO_THREADS__'},
            'stdbit': {'include': 'missing'},
            'stddef': {'include': 'usable', 'version': 'missing'},
        }}
        rows = {row['rule']: row for row in coverage(self.profiles, rules, {}, checked)
                if row['edition'] == 23 and row['profile'] == self.native}
        self.assertEqual(rows['library.header.threads']['status'], 'inapplicable')
        self.assertEqual(rows['library.header.stdbit']['status'], 'uncovered')
        self.assertIn('omits its C23 version macro', rows['library.header-version.stddef']['reason'])

    def test_header_version_token_requires_exact_spelling(self):
        def expansion(text):
            return version_tokens(f'identifier CPPGM_VERSION_BEGIN\n{text}\nidentifier CPPGM_VERSION_END\n')

        self.assertTrue(current_version_token(expansion('literal 202311L long int 4716030000000000')))
        self.assertFalse(current_version_token(expansion('literal 202311l long int 4716030000000000')))
        self.assertFalse(current_version_token(expansion(
            'punctuator (\nliteral 202311L long int 4716030000000000\npunctuator )')))
        self.assertIsNone(version_tokens('identifier some_unrelated_name\n'))

    def test_signal_opt_in_leaves_default_hosted_requirement_uncovered(self):
        rules = {name: self.rules[name] for name in ('library.signal', 'library.wasi-signal-emulation')}
        wasi = 'wasi-hosted'
        succeeded = {('library.wasi-signal-emulation', wasi, 17, opt): 'passed' for opt in ('O0', 'O2')}
        checked = {(wasi, 17): {'signal': {'include': 'sdk-opt-in'}}}
        rows = {row['rule']: row for row in coverage(self.profiles, rules, succeeded, checked)
                if row['profile'] == wasi and row['edition'] == 17}
        self.assertEqual(rows['library.signal']['status'], 'uncovered')
        self.assertIn('requires the SDK emulation opt-in', rows['library.signal']['reason'])
        self.assertEqual(rows['library.wasi-signal-emulation']['status'], 'passing')

    def test_library_runtime_applicability(self):
        names = ('stdarg', 'stddef', 'stdio', 'string', 'stdlib', 'inttypes', 'wchar', 'stdatomic', 'uchar',
                 'complex', 'fenv', 'math')
        checked = {name: {'include': 'usable'} for name in names}
        versions = {name: dict(status, version='current') for name, status in checked.items()}

        def selected(profile_id, edition, c23=versions, wasi_libraries=None):
            profile = self.profiles[profile_id]
            return {case: link_flags for case, _, _, link_flags in
                    library_sources(profile, edition, checked, c23, wasi_libraries or {})}

        self.assertNotIn('library.va-copy-stdio', selected(self.native, 90))
        self.assertIn('library.va-copy-stdio', selected(self.native, 99))
        self.assertNotIn('library.c23-binary-stdio', selected(self.native, 23, c23=checked))
        self.assertIn('library.c23-binary-stdio', selected(self.native, 23))
        self.assertEqual(selected(self.native, 23)['library.c23-complex-interfaces'], ('-lm',))
        self.assertEqual(selected(self.native, 23)['library.c23-fenv-interfaces'], ('-lm',))
        self.assertEqual(selected(self.native, 23)['library.c23-math-classification'], ('-lm',))
        self.assertEqual(selected(self.native, 23)['library.c23-math-extrema'], ('-lm',))
        self.assertEqual(selected(self.native, 23)['library.c23-math-fromfp'], ('-lm',))
        self.assertEqual(selected(self.native, 23)['library.c23-math-representation'], ('-lm',))
        self.assertEqual(selected(self.native, 23)['library.c23-math-roundeven'], ('-lm',))
        self.assertEqual(selected(self.native, 23)['library.c23-atomic-interfaces'], ('-latomic',))
        self.assertIn('library.c23-stdlib-interfaces', selected(self.native, 23))
        self.assertIn('library.c23-wide-searches', selected(self.native, 23))
        self.assertIn('library.c17-binary-prefix-control', selected(self.native, 17, c23=checked))
        self.assertIn('library.c17-binary-stdio-control', selected(self.native, 17, c23=checked))
        bare = selected('wasm-freestanding', 23)
        self.assertIn('library.stddef-layout', bare)
        self.assertIn('library.c23-memalignment', bare)
        self.assertNotIn('library.stdlib-allocation', bare)
        self.assertNotIn('library.c23-string-allocation', bare)
        wasi = selected('wasi-hosted', 23, wasi_libraries={'c-printscan-long-double': '/sdk/lib/archive.a'})
        self.assertNotIn('library.stdio-long-double', wasi)
        self.assertNotIn('library.stdio-temporary', wasi)
        self.assertEqual(wasi['library.wasi-stdio-long-double'], ('-lc-printscan-long-double',))
        supplemented = selected('wasi-c23-hosted', 23, c23=checked)
        self.assertIn('library.stdio-long-double', supplemented)
        self.assertIn('library.stdio-temporary', supplemented)
        self.assertIn('library.c23-memalignment', supplemented)
        self.assertIn('library.c23-binary-conversion', supplemented)
        self.assertEqual(supplemented['library.c23-math-classification'], ())
        self.assertEqual(supplemented['library.c23-math-extrema'], ())
        self.assertEqual(supplemented['library.c23-math-fromfp'], ())
        self.assertEqual(supplemented['library.c23-math-representation'], ())
        self.assertEqual(supplemented['library.c23-math-roundeven'], ())
        self.assertNotIn('library.c23-binary-stdio', supplemented)
        stdio_versions = {**checked, 'stdio': versions['stdio'], 'inttypes': versions['inttypes']}
        stdio_current = selected('wasi-c23-hosted', 23, c23=stdio_versions)
        self.assertIn('library.c23-binary-stdio', stdio_current)
        self.assertIn('library.c23-stdio-nan', stdio_current)
        self.assertNotIn('library.c23-atomic-interfaces', supplemented)
        self.assertEqual(selected('wasi-c23-hosted', 23)['library.c23-atomic-interfaces'], ())
        self.assertNotIn('library.c23-wide-searches', selected('wasi-c23-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-binary-stdio', selected('wasi-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-binary-conversion', selected('wasi-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-memalignment', selected('wasi-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-math-classification', selected('wasi-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-math-extrema', selected('wasi-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-math-fromfp', selected('wasi-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-math-representation', selected('wasi-hosted', 23, c23=checked))
        self.assertNotIn('library.c23-math-roundeven', selected('wasi-hosted', 23, c23=checked))

    def test_wasi_supplement_has_only_c23_receipts(self):
        profile = 'wasi-c23-hosted'
        rows = [row for row in coverage(self.profiles, self.rules, {})
                if row['profile'] == profile]
        self.assertEqual({row['edition'] for row in rows}, {23})
        with self.assertRaisesRegex(ValueError, 'edition outside the profile'):
            evidence_key(dict(self.valid_runtime(), profile=profile, target='wasm32-wasip1', edition=17),
                         self.profiles)

    def test_incomplete_or_failing_variant_never_passes(self):
        key = ('limits.combined', self.native, 99, 'O0')
        for result, expected in (('passed', 'uncovered'), ('failed', 'failing')):
            rule = {'limits.block-depth': self.rules['limits.block-depth']}
            row = next(row for row in coverage(self.profiles, rule, {key: result})
                       if row['edition'] == 99 and row['profile'] == self.native)
            self.assertEqual(row['status'], expected)

    def test_inventory_rejects_duplicate_missing_and_stale_ids(self):
        for change, message in (
            ({'id': 'error.message'}, 'duplicate rule'),
            ({'id': None}, 'missing or invalid rule ID'),
            ({'id': 'error.stale', 'cases': ['missing.case']}, 'unrecognized case'),
        ):
            with self.subTest(change=change), tempfile.TemporaryDirectory() as directory:
                data = json.loads(INVENTORY.read_text())
                row = dict(self.rules['error.message'], **change)
                data['rules'].append(row)
                path = Path(directory) / 'inventory.json'
                path.write_text(json.dumps(data))
                with self.assertRaisesRegex(ValueError, message):
                    inventory(path)

    def valid_runtime(self):
        return dict(case='limits.combined', profile=self.native, edition=99, variant='O0',
                    target='x86_64-linux-gnu', environment='hosted', status='passed',
                    stages=[dict(name=name, returncode=0, classification='success')
                            for name in ('compile', 'link', 'run')])

    def test_compile_success_does_not_establish_execution(self):
        row = self.valid_runtime()
        expected = ('limits.combined', self.native, 99, 'O0')
        self.assertEqual(evidence_key(row, self.profiles), expected)
        row['stages'].pop()
        with self.assertRaisesRegex(ValueError, 'lacks stage evidence'):
            evidence_key(row, self.profiles)
        row['status'] = 'failed'
        self.assertEqual(evidence_key(row, self.profiles), expected)

    def test_vla_abi_evidence_requires_both_units_and_the_exported_result(self):
        profile = self.profiles['wasm-freestanding']
        row = dict(self.valid_runtime(), case='vla.cppgm-caller', profile=profile['id'],
                   target=profile['target'], environment=profile['environment'])
        companion = dict(name='compile-companion', returncode=0, classification='success')
        row['stages'].insert(1, companion)
        row['stages'][-1]['stdout'] = '0\n'
        self.assertEqual(evidence_key(row, self.profiles), ('vla.cppgm-caller', profile['id'], 99, 'O0'))
        row['stages'][-1]['stdout'] = '1\n'
        with self.assertRaisesRegex(ValueError, 'lacks bare Wasm return value'):
            evidence_key(row, self.profiles)
        row['stages'].pop(1)
        with self.assertRaisesRegex(ValueError, 'invalid stage history'):
            evidence_key(row, self.profiles)

    def test_bare_wasm_result_checks_the_exported_value(self):
        profile = self.profiles['wasm-freestanding']
        row = dict(self.valid_runtime(), profile=profile['id'], target=profile['target'],
                   environment=profile['environment'])
        last = row['stages'][-1]
        for extra in ({}, {'stdout': '1\n'}):
            with self.subTest(extra=extra):
                last.update(extra)
                with self.assertRaisesRegex(ValueError, 'lacks bare Wasm return value'):
                    evidence_key(row, self.profiles)
        last['stdout'] = '0\n'
        self.assertEqual(evidence_key(row, self.profiles), ('limits.combined', profile['id'], 99, 'O0'))

    def test_single_stage_receipts_distinguish_success_and_diagnostics(self):
        success = dict(name='preprocess', classification='success', returncode=0)
        rejection = dict(name='preprocess', classification='rejection', returncode=1)
        for case, expected, unexpected in (
            ('environment.thread-predefine', success, rejection),
            ('error.message', rejection, success),
            ('record.flexible-only-member', dict(rejection, name='compile'), dict(success, name='compile')),
        ):
            with self.subTest(case=case):
                row = dict(self.valid_runtime(), case=case, variant='default', stages=[expected])
                self.assertEqual(evidence_key(row, self.profiles), (case, self.native, 99, 'default'))
                row['stages'] = [unexpected]
                with self.assertRaisesRegex(ValueError, 'lacks stage evidence'):
                    evidence_key(row, self.profiles)

    def test_runtime_case_uses_a_fresh_working_directory(self):
        command = [sys.executable, '-c', 'from pathlib import Path; Path("output").touch(exist_ok=False)']
        with tempfile.TemporaryDirectory() as directory:
            for case in ('one', 'two'):
                work = Path(directory) / case
                stages, _ = run_stages(work, [('run', command)])
                self.assertEqual(stages[0]['classification'], 'success')
                self.assertEqual(Path(stages[0]['cwd']), work)
                self.assertTrue((work / 'output').is_file())

    def test_rejects_wrong_target_and_duplicate_receipts(self):
        row = self.valid_runtime()
        with self.assertRaisesRegex(ValueError, 'target or environment mismatch'):
            evidence_key(dict(row, profile='wasi-hosted'), self.profiles)
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / 'results.json'
            path.write_text(json.dumps(dict(schema=1, revision='test', results=[row, row])))
            with self.assertRaisesRegex(ValueError, 'duplicate receipt'):
                read_evidence([path], self.profiles)


if __name__ == '__main__':
    unittest.main()

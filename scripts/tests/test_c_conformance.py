import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from c_conformance import coverage, evidence_key, inventory, read_evidence, INVENTORY


class CoverageTests(unittest.TestCase):
    def setUp(self):
        self.profiles, self.rules = inventory(INVENTORY)
        self.native = 'linux-x86_64-hosted'

    def test_all_limits_and_target_specific_receipts(self):
        self.assertEqual(sum(name.startswith('limits.') and 'limits.combined' in rule['cases']
                             for name, rule in self.rules.items()), 22)
        receipts = {('limits.combined', self.native, 99, opt): 'passed' for opt in ('O0', 'O2')}
        rows = {(r['rule'], r['edition'], r['profile']): r['status']
                for r in coverage(self.profiles, self.rules, receipts)}
        self.assertEqual(rows[('limits.block-depth', 99, self.native)], 'passing')
        self.assertEqual(rows[('limits.block-depth', 11, self.native)], 'uncovered')
        self.assertEqual(rows[('limits.block-depth', 99, 'wasi-hosted')], 'uncovered')
        self.assertEqual(rows[('limits.object-size', 99, 'wasm-freestanding')], 'inapplicable')
        self.assertEqual(rows[('limits.numeric-macros', 99, self.native)], 'uncovered')

    def test_incomplete_or_failing_variant_never_passes(self):
        key = ('limits.combined', self.native, 99, 'O0')
        for result, expected in (('passed', 'uncovered'), ('failed', 'failing')):
            rule = {'limits.block-depth': self.rules['limits.block-depth']}
            row = next(iter(coverage(self.profiles, rule, {key: result})))
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

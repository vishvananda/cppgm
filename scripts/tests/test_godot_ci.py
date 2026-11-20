#!/usr/bin/env python3
"""Godot reports require complete builds, calibrated times and known results."""
import copy
import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import xml.etree.ElementTree as ET
from types import SimpleNamespace
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import godot_ci as ci
import godot_results
import benchmark_freshness
import benchmark_report


class GodotCITests(unittest.TestCase):
    def observations(self):
        return [dict(workload=name, phase='AB-' + ref, label=label, cpu=cpu, measured_wall=cpu / 2)
                for name in ci.WORKLOADS for ref in ('gcc', 'clang')
                for label, cpu in [(ref, 2), ('cppgm', 1)]]

    def document(self):
        interval = dict(speed=2, blocks=[2], calibration_before=dict(speed=1, blocks=[1]),
                        calibration_after=dict(speed=1, blocks=[1]))
        pair = {ref: {key: copy.deepcopy(interval) for key in ('cpu', 'measured_wall')}
                for ref in ('gcc', 'clang')}
        return dict(status='complete', source_commit=ci.COMMIT,
                    metadata=dict(revision='a' * 40, dirty=False, cpu='AMD EPYC example',
                                  cpus='0,1', runtime_cpu='0', flags=ci.BUILD_FLAGS,
                                  workload_hashes={'workload.gd': 'b' * 64},
                                  toolchains={label: 'example compiler' for label in ci.LABELS}),
                    compilation={label: dict(status=0, cpu=100, wall=50, command=['scons', '-j2'])
                                 for label in ci.LABELS},
                    runtime={name: copy.deepcopy(pair) for name in ci.WORKLOADS},
                    correctness={name: {label: ci.expected(name, 100000) for label in ci.LABELS}
                                 for name in ci.WORKLOADS})

    def test_known_workloads_have_independent_small_results(self):
        self.assertEqual(ci.expected('dispatch', 4), -1)
        self.assertEqual(ci.expected('arrays', 4), 102)
        self.assertEqual(ci.expected('strings', 4), 80)
        self.assertEqual(ci.expected('geometry', 4), 0)
        self.assertEqual(ci.expected('scene', 4), 32)

    def test_output_requires_identity_checksum_and_positive_elapsed_time(self):
        result = dict(workload='arrays', iterations=4, repeats=2, checksum=204, elapsed_usec=10)
        text = 'CPPGM_GODOT ' + json.dumps(result)
        self.assertEqual(ci.parse_output('Engine banner\n' + text, 'arrays', 4, 2), result)
        for key, value in [('checksum', 205), ('repeats', 1), ('elapsed_usec', 0), ('workload', 'scene')]:
            changed = dict(result, **{key: value})
            with self.subTest(key=key), self.assertRaises(ValueError):
                ci.parse_output('CPPGM_GODOT ' + json.dumps(changed), 'arrays', 4, 2)
        with self.assertRaises(ValueError):
            ci.parse_output(text + '\n' + text, 'arrays', 4, 2)

    def test_complete_evidence_is_required(self):
        ci.validate(self.document())
        for change in ('build', 'checksum', 'timing', 'calibration', 'missing'):
            document = self.document()
            if change == 'build':
                document['compilation']['cppgm']['status'] = 1
            elif change == 'checksum':
                for label in ci.LABELS:
                    document['correctness']['scene'][label] += 1
            elif change == 'timing':
                document['runtime']['scene']['gcc']['cpu']['speed'] = float('nan')
            elif change == 'calibration':
                document['runtime']['scene']['gcc']['cpu']['calibration_before']['blocks'] = []
            else:
                del document['runtime']['scene']
            with self.subTest(change=change), self.assertRaises(ValueError):
                ci.validate(document)

    def test_report_distinguishes_build_observations_and_paired_runtime(self):
        text = ci.report(self.document())
        self.assertIn('one clean build per compiler', text)
        self.assertIn('reference time / cppgm time: higher is better', text)
        self.assertIn('work wall time excludes engine startup', text.lower())
        self.assertIn('| geometry | 2.000× | 2.000× |', text)

    def test_dirty_or_mismatched_revision_cannot_replace_last_good_report(self):
        for dirty, revision in [(True, 'a' * 40), (False, 'b' * 40)]:
            with self.subTest(dirty=dirty), tempfile.TemporaryDirectory() as temporary:
                root = Path(temporary)
                artifact = root / 'artifact'
                artifact.mkdir()
                document = self.document()
                document['metadata']['dirty'] = dirty
                ci.save(artifact / 'results.json', document)
                target = root / 'published'
                previous = target / 'godot/epyc/report.md'
                previous.parent.mkdir(parents=True)
                previous.write_text('last good')
                with self.assertRaises(ValueError):
                    ci.publish(SimpleNamespace(artifact=artifact, target=target, revision=revision,
                                               run_url='https://example.test/run'))
                self.assertEqual(previous.read_text(), 'last good')

    def test_hosted_intel_publication_retains_epyc_and_history(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            artifact = root / 'artifact'
            artifact.mkdir()
            document = self.document()
            document['metadata']['cpu'] = 'Intel Xeon Platinum 8370C'
            ci.save(artifact / 'results.json', document)
            ci.save(artifact / 'metadata.json', document['metadata'])
            (artifact / 'compile-observations.jsonl').write_text('')
            (artifact / 'runtime-observations.jsonl').write_text(
                ''.join(json.dumps(row) + '\n' for row in self.observations()))
            target = root / 'published'
            previous = target / 'godot/epyc/report.md'
            previous.parent.mkdir(parents=True)
            previous.write_text('last EPYC')
            ci.publish(SimpleNamespace(artifact=artifact, target=target, revision='a' * 40,
                                       run_url='https://example.test/run'))
            self.assertEqual(previous.read_text(), 'last EPYC')
            for path in ('godot/github-intel/results.json', 'godot/history/' + 'a' * 40 + '/github-intel/results.json'):
                self.assertEqual((target / path).read_bytes(), (artifact / 'results.json').read_bytes())
            shared = json.loads((target / 'godot/github-intel/standard/records.json').read_text())
            self.assertEqual(len(shared['records']), 28)
            self.assertTrue((target / 'godot/github-intel/standard/godot.md').is_file())

    def test_dedicated_intel_preserves_hosted_results_and_labels_environment(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            artifact = root / 'artifact'
            artifact.mkdir()
            document = self.document()
            document['metadata']['cpu'] = 'Intel Xeon E5-2696 v4'
            ci.save(artifact / 'results.json', document)
            ci.save(artifact / 'metadata.json', document['metadata'])
            (artifact / 'compile-observations.jsonl').write_text('')
            (artifact / 'runtime-observations.jsonl').write_text(''.join(json.dumps(r) + '\n' for r in self.observations()))
            target = root / 'published'
            for host in ('epyc', 'github-intel'):
                path = target / 'godot' / host / 'report.md'
                path.parent.mkdir(parents=True)
                path.write_text('last ' + host)
            ci.publish(SimpleNamespace(artifact=artifact, target=target, revision='a' * 40,
                                       run_url='https://example.test/run', platform='intel'))
            for host in ('epyc', 'github-intel'):
                self.assertEqual((target / 'godot' / host / 'report.md').read_text(), 'last ' + host)
            shared = json.loads((target / 'godot/intel/standard/records.json').read_text())
            self.assertTrue(all('Dedicated Intel' in r['host']['environment'] for r in shared['records']))
            self.assertIn('1.00×', (target / 'godot/intel-build-gcc.svg').read_text())

    def test_shared_records_preserve_phase_metric_method_and_exact_host(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            ci.save(root / 'results.json', self.document())
            rows = self.observations()
            (root / 'runtime-observations.jsonl').write_text(''.join(json.dumps(r) + '\n' for r in rows))
            def normalized(environment='test host'):
                return godot_results.normalize(root, environment, *(['https://example.test/evidence'] * 3))
            doc = normalized()
            catalog = json.loads((ci.ROOT / 'benchmarks/catalog.json').read_text())
            benchmark_report.validate(catalog, doc)
            self.assertEqual(len(doc['records']), 28)
            builds = [r for r in doc['records'] if r['phase'] == 'build']
            self.assertEqual(len(builds), 4)
            self.assertTrue(all(r['test'] == 'full-build' and r['context']['workers'] == 2 for r in builds))
            run = next(r for r in doc['records'] if r['test'] == 'scene' and r['baseline'] == 'gcc'
                       and r['metric'] == 'cpu_seconds')
            self.assertEqual((run['speedup'], run['candidate_seconds'], run['reference_seconds']), (2, 1, 2))
            aggregate = next(r for r in doc['records'] if r['test'] == 'checked-workloads')
            self.assertEqual(aggregate['coverage']['selected'], 5)
            self.assertIsNone(aggregate['candidate_seconds'])
            self.assertIn('Equal-weight geometric mean', aggregate['method'])
            self.assertIn('system', aggregate['provenance']['historical_unknowns'])
            self.assertNotEqual(doc['records'][0]['host']['id'], normalized('another host')['records'][0]['host']['id'])
            changed = self.document()
            changed['metadata']['cpu'] = 'another EPYC model'
            ci.save(root / 'results.json', changed)
            self.assertNotEqual(doc['records'][0]['host']['id'], normalized()['records'][0]['host']['id'])
            changed['correctness']['scene']['cppgm'] += 1
            ci.save(root / 'results.json', changed)
            with self.assertRaises(ValueError):
                normalized()
            ci.save(root / 'results.json', self.document())
            (root / 'runtime-observations.jsonl').write_text('')
            with self.assertRaisesRegex(ValueError, 'missing raw runtime'):
                normalized()


def timed(document, times, revision, hashes=None, cpu='AMD EPYC example', measured_at=None):
    """A complete result with time per pass, as written after the wait4 change."""
    document = copy.deepcopy(document)
    document['metadata'].update(revision=revision, cpu=cpu)
    if measured_at:
        document['metadata']['measured_at'] = measured_at
    document['binary_hashes'] = dict(dict(cppgm='c' * 64, gcc='d' * 64, clang='e' * 64), **(hashes or {}))
    document['badge_metric'] = 'measured_wall'
    document['time_per_pass'] = {name: {label: {key: dict(median=value, least=value, observations=4)
                                                for key in ('measured_wall', 'cpu')}
                                        for label, value in times.get(name, {}).items()}
                                 for name in ci.WORKLOADS}
    return document


class GodotMeasurementTests(unittest.TestCase):
    cpu = str(min(os.sched_getaffinity(0)))

    def test_wait4_reports_microsecond_process_cpu_and_status(self):
        with tempfile.TemporaryDirectory() as temporary:
            prefix = Path(temporary) / 'burn'
            row = ci.timed_run([sys.executable, '-c', 'import time\nend = time.process_time() + .05\n'
                                'while time.process_time() < end: pass\nprint("done")'], prefix, self.cpu, 60)
            self.assertEqual((row['status'], row['time_source']), (0, 'wait4'))
            self.assertEqual(row['command'][:3], ['taskset', '-c', self.cpu])
            self.assertGreaterEqual(row['cpu'], .05)
            self.assertAlmostEqual(row['cpu'], row['user_cpu'] + row['system_cpu'])
            # /usr/bin/time printed whole hundredths; resource usage keeps microseconds.
            self.assertNotAlmostEqual(row['cpu'] * 100, round(row['cpu'] * 100), places=4)
            self.assertGreater(row['max_rss_kib'], 0)
            self.assertEqual(Path(row['stdout']).read_text(), 'done\n')
            failed = ci.timed_run([sys.executable, '-c', 'raise SystemExit(3)'], prefix, self.cpu, 60)
            self.assertEqual(failed['status'], 3)
            self.assertNotIn('cpu', failed)
            slow = ci.timed_run([sys.executable, '-c', 'import time; time.sleep(30)'], prefix, self.cpu, .5)
            self.assertEqual(slow['status'], 'timeout')
            self.assertLess(slow['wall'], 20)

    def test_address_space_probe_never_fails_the_run(self):
        refused = ci.address_space_probe('no-such-architecture')
        self.assertEqual((refused['fixed_layout'], refused['wrapper']), (False, []))
        self.assertTrue(refused['detail'])
        probe = ci.address_space_probe()
        self.assertEqual(probe['wrapper'], ['setarch', ci.platform.machine(), '-R'] if probe['fixed_layout'] else [])

    def test_host_state_tolerates_missing_and_partial_files(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            empty = ci.host_state('0', root)
            self.assertEqual({key: empty[key] for key in ('microcode', 'cpu_family', 'transparent_hugepage',
                                                           'randomize_va_space')}, dict.fromkeys(
                ('microcode', 'cpu_family', 'transparent_hugepage', 'randomize_va_space')))
            self.assertEqual(empty['vulnerabilities'], {})
            self.assertTrue(empty['kernel_release'])
            (root / 'proc').mkdir()
            (root / 'proc/cpuinfo').write_text(
                'processor\t: 0\ncpu family\t: 25\nmodel\t\t: 1\nstepping\t: 1\nmicrocode\t: 0xa0011d1\n\n'
                'processor\t: 1\ncpu family\t: 25\nmodel\t\t: 1\nstepping\t: 2\nmicrocode\t: 0xa0011d5\n')
            vulnerabilities = root / 'sys/devices/system/cpu/vulnerabilities'
            vulnerabilities.mkdir(parents=True)
            (vulnerabilities / 'retbleed').write_text('Mitigation: untrained return thunk\n')
            (vulnerabilities / 'hidden').mkdir()  # unreadable as a file
            state = ci.host_state('1', root)
            self.assertEqual((state['cpu_family'], state['cpu_model_number'], state['cpu_stepping'],
                              state['microcode']), ('25', '1', '2', '0xa0011d5'))
            self.assertEqual(state['vulnerabilities'], dict(hidden=None, retbleed='Mitigation: untrained return thunk'))
            microcode = root / 'sys/devices/system/cpu/cpu1/microcode'
            microcode.mkdir(parents=True)
            (microcode / 'version').write_text('0xa0011d7\n')
            self.assertEqual(ci.host_state('1-3', root)['microcode'], '0xa0011d7')

    def test_time_per_pass_excludes_unpaired_runs_and_divides_by_repeats(self):
        rows = [dict(workload='geometry', label='clang', phase='AB-clang', status=0, repeats=4,
                     cpu=.6, measured_wall=.4),
                dict(workload='geometry', label='clang', phase='AA-before-clang', status=0, repeats=4,
                     cpu=.68, measured_wall=.48),
                # Results before this change carry the repeats only as the last command argument.
                dict(workload='geometry', label='clang', phase='AB-gcc', status=0, cpu=.64, measured_wall=.44,
                     command=['taskset', '-c', '0', 'godot', '--', 'geometry', '100000', '4']),
                dict(workload='geometry', label='clang', phase='pilot', status=0, repeats=1, cpu=9, measured_wall=9),
                dict(workload='geometry', label='clang', phase='correctness', status=0, repeats=1, cpu=9,
                     measured_wall=9),
                dict(workload='geometry', label='clang', phase='AB-clang', status=1, repeats=4)]
        times = ci.pass_times(rows)['geometry']['clang']
        self.assertEqual(times['measured_wall']['observations'], 3)
        self.assertAlmostEqual(times['measured_wall']['median'], .11)
        self.assertAlmostEqual(times['measured_wall']['least'], .1)
        self.assertAlmostEqual(times['cpu']['median'], .16)

    def test_badge_uses_work_time_that_excludes_start_up(self):
        import library_benchmark_badges as badges
        document = GodotCITests().document()
        for row in document['runtime'].values():
            for ref in ('gcc', 'clang'):
                row[ref]['cpu']['speed'] = 1.25  # start-up inside the process time dilutes the ratio
        self.assertAlmostEqual(badges.metrics('godot', document)['runtime-clang'], 1.25)
        document['badge_metric'] = ci.BADGE_KEY
        self.assertAlmostEqual(badges.metrics('godot', document)['runtime-clang'], 2)
        text = ci.report(timed(document, {'geometry': dict(cppgm=.0148, gcc=.0139, clang=.011)}, 'a' * 40))
        self.assertIn('Median `measured_wall` time per pass', text)

    def history(self, root):
        """An old entry without time per pass, two new ones, another CPU model and another Clang binary."""
        base = GodotCITests().document()
        old = dict(base, binary_hashes=dict(cppgm='c' * 64, gcc='d' * 64, clang='e' * 64))
        entries = {
            'history/' + '1' * 40 + '/epyc': old,
            'history/' + '2' * 40 + '/epyc': timed(base, {'geometry': dict(clang=.01426, gcc=.0139)}, '2' * 40,
                                                   measured_at='2026-11-20T03:00:00+00:00'),
            'history/' + '3' * 40 + '/epyc': timed(base, {'geometry': dict(clang=.01372, gcc=.01388),
                                                          'arrays': dict(clang=.00484)}, '3' * 40,
                                                   measured_at='2026-11-19T03:00:00+00:00'),
            'history/' + '4' * 40 + '/epyc': timed(base, {'geometry': dict(clang=.02, gcc=.02)}, '4' * 40,
                                                   cpu='AMD EPYC 9V74', measured_at='2026-11-20T04:00:00+00:00'),
            'history/' + '5' * 40 + '/epyc': timed(base, {'scene': dict(clang=.02)}, '5' * 40,
                                                   hashes=dict(clang='f' * 64), measured_at='2026-11-20T05:00:00+00:00'),
            # Measured after the current run, published first: not an earlier run.
            'history/' + '7' * 40 + '/epyc': timed(base, {'geometry': dict(clang=.011)}, '7' * 40,
                                                   measured_at='2026-11-20T07:00:00+00:00'),
        }
        for name, document in entries.items():
            (root / name).mkdir(parents=True)
            ci.save(root / name / 'results.json', document)
            (root / name / 'report.md').write_text('[CI run](https://github.com/o/r/actions/runs/7)\n')
        (root / 'epyc').mkdir()
        ci.save(root / 'epyc/results.json', entries['history/' + '2' * 40 + '/epyc'])
        return timed(base, {'geometry': dict(clang=.01104, gcc=.01394, cppgm=.01483),
                            'arrays': dict(clang=.00485), 'scene': dict(clang=.02)}, '6' * 40,
                     measured_at='2026-11-20T06:00:00+00:00')

    def check_drift(self, drift):
        clang, gcc = drift['references']['clang'], drift['references']['gcc']
        self.assertEqual(clang['geometry']['state'], 'moved')
        self.assertAlmostEqual(clang['geometry']['change'], .01104 / .01426 - 1)
        self.assertEqual(clang['geometry']['previous_revision'], '2' * 40)
        self.assertEqual(gcc['geometry']['state'], 'steady')
        # The newest matching run lacks arrays; the one before it has them.
        self.assertEqual((clang['arrays']['state'], clang['arrays']['previous_revision']), ('steady', '3' * 40))
        # A different Clang binary is no comparison; the old entry only counts as skipped.
        self.assertEqual(clang['scene']['state'], 'no earlier run')
        self.assertEqual(clang['scene']['skipped_without_time_per_pass'], 3)
        self.assertEqual(clang['dispatch']['state'], 'not recorded')
        self.assertEqual([(row['reference'], row['workload']) for row in drift['moved']], [('clang', 'geometry')])

    def test_reference_moved_against_old_and_new_published_history(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary) / 'godot'
            current = self.history(root)
            earlier = godot_results.published_history(root)
            self.assertEqual(len(earlier), 6)  # the host copy of an entry is not counted twice
            self.assertEqual(earlier[0][0], 'history/' + '7' * 40 + '/epyc/results.json')
            self.check_drift(godot_results.reference_drift(current, earlier))
            # The same run published again is not its own earlier run.
            self.assertEqual(godot_results.reference_drift(current, [('self', current)])['moved'], [])
            text = godot_results.drift_markdown(godot_results.reference_drift(current, earlier))
            self.assertIn('| geometry | Clang | 11.04 | 14.26 | -22.6% | `222222222` | **reference moved** |', text)
            subprocess.run(['git', 'init', '-q', temporary], check=True)
            subprocess.run(['git', '-C', temporary, 'add', '.'], check=True)
            subprocess.run(['git', '-C', temporary, '-c', 'user.name=t', '-c', 'user.email=t@example.test',
                            'commit', '-q', '-m', 'history'], check=True)
            self.check_drift(godot_results.reference_drift(current, godot_results.git_history(temporary, 'HEAD')))

    def test_old_results_compare_from_their_raw_observations(self):
        document = GodotCITests().document()
        rows = [dict(workload='geometry', label='clang', phase='AB-clang', status=0, cpu=.6, measured_wall=.4,
                     command=['godot', 'geometry', '100000', '4'])]
        drift = godot_results.reference_drift(dict(document, binary_hashes=dict(clang='e' * 64)), [], rows)
        self.assertEqual(drift['metric'], 'measured_wall')
        self.assertEqual(drift['references']['clang']['geometry'], dict(state='no earlier run', current_seconds=.1))

    def test_publication_marks_the_moved_reference_report_and_badge(self):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            target = root / 'published'
            current = self.history(target / 'godot')
            current['metadata']['cpu'] = 'AMD EPYC example'
            artifact = root / 'artifact'
            artifact.mkdir()
            ci.save(artifact / 'results.json', current)
            ci.save(artifact / 'metadata.json', current['metadata'])
            (artifact / 'runtime-observations.jsonl').write_text(
                ''.join(json.dumps(row) + '\n' for row in GodotCITests().observations()))
            ci.publish(SimpleNamespace(artifact=artifact, target=target, revision='6' * 40,
                                       run_url='https://github.com/o/r/actions/runs/9'))
            for host in ('godot/epyc', 'godot/history/' + '6' * 40 + '/epyc'):
                drift = json.loads((target / host / ci.DRIFT_FILE).read_text())
                self.assertEqual(drift['moved'][0]['workload'], 'geometry')
                self.assertIn('**reference moved**', (target / host / 'report.md').read_text())
            clang = (target / 'godot/epyc-runtime-clang.svg').read_text()
            image = ET.fromstring(clang)
            self.assertEqual(image.get('data-reference-moved'), 'geometry 14.26 to 11.04 ms per pass')
            self.assertEqual(image.get('data-original-message'), '2.00×')
            self.assertIn('>2.00×†</text>', clang)
            self.assertIn('fill="#475569"', clang)
            gcc = (target / 'godot/epyc-runtime-gcc.svg').read_text()
            self.assertNotIn('reference moved', gcc)
            self.assertIn('>2.00×</text>', gcc)
            # Freshness renders keep the mark, add the age mark and restore the color once it is gone.
            path = target / 'godot/epyc-runtime-clang.svg'
            metadata = current['metadata']
            age = dict(commits_behind=12, status='ahead', measured_at='2026-11-20T00:00:00Z')
            for _ in range(2):
                path.write_text(benchmark_freshness.render(path, 'EPYC', metadata, age))
            text = path.read_text()
            self.assertIn('>2.00×†*</text>', text)
            self.assertIn('fill="#475569"', text)
            self.assertEqual(text.count('reference moved'), 2)  # title and aria-label, not repeated
            hidden = benchmark_freshness.render(path, 'EPYC', metadata, dict(age, commits_behind=100))
            self.assertIn('>stale</text>', hidden)
            self.assertIn('data-original-color="14532d"', hidden)


if __name__ == '__main__':
    unittest.main()

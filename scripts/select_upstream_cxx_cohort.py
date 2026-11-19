#!/usr/bin/env python3
"""Select the reviewed CI configurations from an edition discovery manifest."""

import argparse
import json
from pathlib import Path

from upstream_dg_proxy import write_json


def select(manifest, inventory, profile):
    if inventory['schema'] != 1:
        raise ValueError('Unknown reviewed cohort schema')
    key = f"{manifest['suite']}:{manifest['edition']}"
    cohort = inventory['cohorts'][key]
    if cohort['revision'] != manifest['revision']:
        raise ValueError('Reviewed cohort needs qualification on the selected upstream revision')
    cases = {case['id']: case for case in manifest['cases']}
    if len(cases) != len(manifest['cases']):
        raise ValueError('Duplicate discovered configuration')
    reviewed = set()
    selected = []
    pending_cases = []
    excluded_cases = []
    for entry in cohort['cases']:
        case_id = entry['id']
        if case_id in reviewed or case_id not in cases:
            raise ValueError('Missing or duplicate reviewed configuration: ' + case_id)
        reviewed.add(case_id)
        case = cases[case_id]
        for field in ('path', 'sha256', 'action', 'expect'):
            if case[field] != entry[field]:
                raise ValueError(f'Reviewed configuration changed {field}: {case_id}')
        if entry.get('pending_reason'):
            pending_cases.append(dict(path=case['path'], id=case_id, reason=entry['pending_reason']))
        elif entry.get('exclusion_reason'):
            excluded_cases.append(dict(path=case['path'], id=case_id, reason=entry['exclusion_reason']))
        elif profile == 'full' or entry.get('pr'):
            selected.append(case)
    if not selected:
        raise ValueError('Reviewed CI cohort is empty: ' + key)
    pending = len(cases) - len(reviewed)
    return dict(manifest, cases=selected, cohort=profile, awaiting_review=pending,
                exclusions=[*manifest['exclusions'], *pending_cases, *excluded_cases],
                coverage=manifest['coverage'] + f' Reviewed {profile} cohort. '
                f'{pending} other projected configurations await review. '
                f'{len(pending_cases)} reviewed gaps and {len(excluded_cases)} reviewed exclusions have source-pinned reasons.')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--discovery', type=Path, required=True)
    parser.add_argument('--inventory', type=Path, default=Path(__file__).resolve().parents[1] /
                        'reports/upstream-cxx-edition-cohorts.json')
    parser.add_argument('--profile', choices=('pr', 'full'), required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    manifest = json.loads(args.discovery.read_text())
    inventory = json.loads(args.inventory.read_text())
    write_json(args.output, select(manifest, inventory, args.profile))


if __name__ == '__main__':
    main()

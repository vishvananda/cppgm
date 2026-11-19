#!/usr/bin/env python3
"""Freeze self-contained GCC language checks using native dg-get-options.

This deliberately small adapter has no target-predicate emulation. Unsupported
metadata is an explicit exclusion, chosen without running either compiler.
"""
import argparse
import base64
from collections import defaultdict
import json
from pathlib import Path
import re
import shlex
import subprocess

from run_upstream_dg import parse_metadata
from upstream_dg_proxy import sha256, write_json
from upstream_cxx_editions import ALIASES, DIALECTS
from upstream_source_projection import projection_identity
from build_clang_cxx11_ci_manifest import code_only


REVISION = '5115c7e447fc07457443df874bf57840e8316d5f'
FAMILIES = {11: 'cpp0x', 14: 'cpp1y', 17: 'cpp1z', 20: 'cpp2a'}


EXTRACT = r'''
proc verbose {args} {}
source [file join [lindex $argv 0] utils.exp]
source [file join [lindex $argv 0] dg.exp]
while {[gets stdin encoded] >= 0} {
    set path [encoding convertfrom utf-8 [binary decode base64 $encoded]]
    puts "FILE\t$encoded"
    foreach directive [dg-get-options $path] {
        set words {}
        foreach word $directive {
            lappend words [binary encode base64 -maxlen 0 [encoding convertto utf-8 $word]]
        }
        puts [join $words \t]
    }
}
'''


def test_directory(edition):
    return 'gcc/testsuite/g++.dg/' + FAMILIES[edition]


class Excluded(ValueError):
    pass


def condition(value, edition=11):
    words = value.strip().split()
    if len(words) != 2 or words[0] != 'target':
        raise Excluded('Unreviewed target selector: ' + value)
    if edition != 11:
        return edition_selector(words[1], edition)
    if words[1] in {'c++11', 'c++11_only'}:
        return True
    if words[1] in {'c++14', 'c++17', 'c++20', 'c++23', 'c++26', 'c++98_only'}:
        return False
    raise Excluded('Unreviewed target selector: ' + value)


def edition_selector(selector, edition):
    match = re.fullmatch(r'c\+\+(98|11|14|17|20|23|26|2a)(?:_(only|down))?', selector)
    if match:
        spelling, relation = match.groups()
        # GCC calls its C++20 predicates c++2a and c++20. C++98 is
        # available here only as c++98_only; there is no c++98 minimum.
        if (spelling, relation) not in {('98', None), ('98', 'down'), ('2a', 'down')}:
            requested = 20 if spelling == '2a' else int(spelling)
            if spelling == '98':
                return False
            if relation == 'only':
                return edition == requested
            if relation == 'down':
                return edition <= requested
            return edition >= requested
    raise Excluded('Unreviewed target selector: ' + selector)


def project(directives, text, edition=11, dialect=None):
    logical = re.sub(r'\\\r?\n', '', text).lstrip('\ufeff')
    code = code_only(logical)
    if re.search(r'\?\?[=/\'()!<>-]', text):
        raise Excluded('Trigraph context needs a preprocessing projection')
    if re.search(r'^\s*(?:#|%:)\s*(?:include|include_next|if|ifdef|ifndef|elif|pragma)\b', code, re.M):
        raise Excluded('Header, conditional preprocessing or pragma context needs a closure projection')
    if re.search(r'\b(?:__GNUC__|__clang__|__GNUG__|__has\w*|__SIZEOF_\w*|__cpp_\w*)\b', code):
        raise Excluded('Compiler-specific predefined macro context needs review')
    if re.search(r'\b(?:__complex__|__real__|__imag__|__attribute__|__typeof__|typeof|__float128)\b', code):
        raise Excluded('Nonstandard GNU language syntax needs a separate extension disposition')
    action, negative, flags = 'compile', False, []
    ambiguous_diagnostics = False
    declared_standard = None
    options_override_default = False
    adaptations = ['Native compile-to-assembly action uses object generation; diagnostic spelling/count ignored',
                   'Candidate uses its normal language diagnostics; optional upstream presentation/warning controls omitted']
    if edition == 11:
        adaptations.append('Native -pedantic-errors becomes upstream -pedantic: preserve diagnostics without severity parity')
    for directive in directives:
        command, args = directive['command'], directive['arguments']
        if command == 'dg-do':
            if len(args) > 2 or (len(args) == 2 and not condition(args[1], edition)):
                raise Excluded(f'Action is outside declared C++{edition} configuration')
            if args[0] not in {'compile', 'run'}:
                raise Excluded('Unprojected native action: ' + args[0])
            action = args[0]
        elif command == 'dg-require-effective-target':
            if edition == 11:
                if args != ['c++11']:
                    raise Excluded('Unreviewed effective-target requirement: ' + str(args))
            elif len(args) != 1 or not edition_selector(args[0], edition):
                raise Excluded('Inapplicable effective-target requirement: ' + str(args))
        elif command in {'dg-options', 'dg-additional-options'}:
            if edition != 11 and command == 'dg-options':
                if options_override_default:
                    raise Excluded('Multiple dg-options assignments need native configuration')
                options_override_default = True
            if len(args) != 1:
                raise Excluded('Conditional compiler options need native configuration')
            for flag in shlex.split(args[0]):
                if flag in {'-O0', '-O1', '-O2', '-O3'}:
                    flags.append(flag)
                elif edition == 11 and flag in {'-std=c++11', '-std=c++0x'}:
                    pass
                elif edition != 11 and flag.startswith('-std='):
                    standard = DIALECTS.get(flag[5:])
                    if declared_standard is not None or standard is None or standard != dialect:
                        raise Excluded('Conflicting or inapplicable explicit dialect: ' + flag)
                    declared_standard = standard
                elif edition != 11 and flag in {'-pedantic', '-pedantic-errors'}:
                    flags.append(flag)
                elif flag in {'-w', '-Wall', '-Wextra', '-pedantic'} or (
                        flag.startswith('-W') and not flag.startswith(('-Werror', '-Wno-'))):
                    adaptations.append('Optional diagnostic option omitted from both compilers: ' + flag)
                else:
                    raise Excluded('Unreviewed semantic/diagnostic option: ' + flag)
        elif command == 'dg-error':
            if len(args) > 4:
                raise Excluded('Unreviewed error expectation arguments')
            if len(args) < 3 or condition(args[2], edition):
                negative = True
        elif command in {'dg-message', 'dg-prune-output'}:
            ambiguous_diagnostics = True
            adaptations.append('Diagnostic context oracle omitted: ' + command)
        elif command in {'dg-warning', 'dg-bogus'}:
            adaptations.append('Optional diagnostic oracle omitted: ' + command)
        else:
            raise Excluded('Unprojected native obligation: ' + command)
    if action == 'run' and negative:
        raise Excluded('Mixed negative/runtime obligations need rule adjudication')
    if ambiguous_diagnostics and not negative:
        raise Excluded('Message/pruned-error-only metadata does not establish positive language validity')
    if not directives:
        raise Excluded('No explicit native metadata')
    if edition != 11 and not options_override_default and '-pedantic-errors' not in flags:
        # g++.dg/dg.exp uses -pedantic-errors unless dg-options replaces it.
        flags.insert(0, '-pedantic-errors')
    expect = ('diagnostic' if edition == 11 else 'reject') if negative else 'accept'
    return action, expect, flags, sorted(set(adaptations))


def extract(paths, library):
    # Native Tcl parsing preserves quoted/braced dg arguments and line numbers.
    import tempfile
    with tempfile.TemporaryDirectory() as directory:
        script = Path(directory) / 'extract.tcl'
        script.write_text(EXTRACT)
        inputs = ''.join(base64.b64encode(str(path).encode()).decode() + '\n' for path in paths)
        raw = subprocess.run(['tclsh', str(script), str(library)], input=inputs,
                             capture_output=True, text=True, check=True).stdout
    result = defaultdict(list)
    current = None
    for line in raw.splitlines():
        if line.startswith('FILE\t'):
            current = base64.b64decode(line.split('\t')[1]).decode()
        elif line:
            result[current].extend(parse_metadata(line))
    return result


def reviewed_projection(directives, text, digest, disposition, edition=11, dialect=None):
    if disposition:
        if disposition['sha256'] != digest:
            raise ValueError('Stale language disposition')
        if disposition['status'] not in {'required-diagnostic', 'standard-line-projection'}:
            raise Excluded(disposition['status'] + ': ' + disposition['reason'])
    action, expect, flags, adaptations = project(directives, text, edition, dialect)
    if disposition and disposition['status'] == 'standard-line-projection':
        if action != 'compile' or expect != 'accept':
            raise ValueError('Line-marker projection requires an acceptance translation')
        adaptations.append('Both compilers use source-pinned standard #line projection: ' + disposition['reason'])
        return action, expect, flags, adaptations
    if disposition:
        if action != 'compile':
            raise Excluded('Required-diagnostic review cannot retain runtime obligations')
        options = disposition.get('diagnostic_options', [])
        if not isinstance(options, list) or any(flag not in {'-Wextra'} for flag in options):
            raise ValueError('Unreviewed diagnostic qualification options')
        for flag in options:
            if flag not in flags:
                flags.append(flag)
        expect = 'diagnostic'
        adaptations.append('Source-pinned language review: ' + disposition['reason'])
        if options:
            adaptations.append('Both compilers use reviewed diagnostic qualification options: ' +
                               ' '.join(options))
    return action, expect, flags, adaptations


def build(root, library, dispositions, edition=11):
    directory = test_directory(edition)
    names = subprocess.check_output(['git', '-C', str(root), 'ls-files', '-z', '--',
                                     directory], text=True).split('\0')
    paths = sorted(root / name for name in names if name and Path(name).suffix == '.C' and
                   Path(name).parent.as_posix() == directory)
    if not paths:
        raise ValueError('No pinned GCC sources found in ' + directory)
    metadata = extract(paths, library)
    cases, exclusions = [], []
    for source in paths:
        path = source.relative_to(root).as_posix()
        digest = sha256(source)
        text = source.read_text()
        disposition = dispositions.get('gcc/' + path)
        for dialect in [f'c++{edition}', f'gnu++{edition}']:
            try:
                action, expect, flags, adaptations = reviewed_projection(
                    metadata[str(source)], text, digest, disposition, edition, dialect)
            except Excluded as error:
                if edition == 11:
                    exclusions.append(dict(path=path, reason=str(error)))
                    break
                exclusions.append(dict(path=path, dialect=dialect, reason=str(error)))
                continue
            case = dict(id=source.stem + '-' + dialect, path=path, sha256=digest,
                        dialect=dialect, action=action, expect=expect,
                        candidate_flags=flags, upstream_flags=['-pedantic', *flags] if edition == 11 else flags,
                        original=metadata[str(source)], adaptations=adaptations)
            if disposition and disposition['status'] == 'standard-line-projection':
                case['source_projection'] = projection_identity(source.read_bytes(), 'gnu-line-markers')
            cases.append(case)
    if edition != 11:
        return dict(schema=1, suite='gcc', edition=edition, revision=REVISION, cases=cases,
                    exclusions=exclusions, coverage=f'Self-contained GCC {FAMILIES[edition]} C++{edition} '
                    'object, rejection and zero-exit runtime checks.',
                    limitations=['Only reviewed directives and simple edition selectors are projected',
                                 'Target-specific, header, and additional-source requirements remain in the inventory'],
                    metadata_parser={name: sha256(library / name) for name in ['dg.exp', 'utils.exp']})
    return dict(schema=1, suite='gcc', revision=REVISION, cases=cases, exclusions=exclusions,
                coverage='Self-contained GCC g++.dg/cpp0x language translations and zero-exit runtime checks; '
                         'native diagnostic text, counts and recovery are not correctness obligations.',
                limitations=['Not the complete GCC suite; other families and unsupported cpp0x metadata excluded',
                             'No headers, conditional preprocessing, specialized target or additional-source support yet',
                             'Required-diagnostic outcomes follow active dg-error declarations or source-pinned language reviews',
                             'Native pedantic escalation becomes diagnostic-only upstream qualification; baseline failures remain failures'],
                metadata_parser={name: sha256(library / name) for name in ['dg.exp', 'utils.exp']})


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--gcc-root', type=Path, required=True)
    parser.add_argument('--dejagnu-library', type=Path, required=True)
    parser.add_argument('--dispositions', type=Path,
                        default=Path(__file__).resolve().parents[1] / 'reports/cxx11-language-dispositions.json')
    parser.add_argument('--edition', type=int, choices=ALIASES, default=11)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    root = args.gcc_root.resolve()
    revision = subprocess.check_output(['git', '-C', str(root), 'rev-parse', 'HEAD'], text=True).strip()
    if revision != REVISION:
        raise ValueError('GCC sources must match pinned revision')
    unchanged = ['git', '-C', str(root), 'diff', '--quiet', 'HEAD', '--', test_directory(args.edition)]
    subprocess.run(unchanged, check=True)
    manifest = build(root, args.dejagnu_library.resolve(), json.loads(args.dispositions.read_text()), args.edition)
    subprocess.run(unchanged, check=True)
    write_json(args.output, manifest)
    print(f"Selected {len(manifest['cases'])} configurations; {len(manifest['exclusions'])} explicit exclusions")


if __name__ == '__main__':
    main()

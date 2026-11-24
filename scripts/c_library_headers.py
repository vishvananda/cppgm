"""C standard header requirements and sources for the SDK qualification probes."""


# Editions are ordered by publication, with C95 denoting Amendment 1.
ADDITIONS = {
    90: 'assert ctype errno float limits locale math setjmp signal stdarg stddef stdio stdlib string time',
    95: 'iso646 wchar wctype',
    99: 'complex fenv inttypes stdbool stdint tgmath',
    11: 'stdalign stdatomic stdnoreturn threads uchar',
    17: '',
    23: 'stdbit stdckdint',
}
FREESTANDING_HEADERS = set('float iso646 limits stdalign stdarg stdbit stdbool stddef stdint stdnoreturn'.split())
# C23 4p7 also requires part of <string.h> and memalignment from <stdlib.h>.
FREESTANDING_C23_PARTIAL = {'string', 'stdlib'}
OPTIONAL_HEADERS = {
    'complex': '__STDC_NO_COMPLEX__',
    'stdatomic': '__STDC_NO_ATOMICS__',
    'threads': '__STDC_NO_THREADS__',
}
# C23 7.1.2 and WG14 issue 1111. Some macros require a spelling, while
# the others require an integer constant expression with the reported value.
VERSION_TOKEN = set('fenv math stdint stdlib tgmath time'.split())
VERSION_VALUE = set(
    'assert complex float inttypes limits setjmp stdarg stdatomic stdbit stdckdint stddef stdio string uchar wchar'.split())
HEADER_VERSIONS = VERSION_TOKEN | VERSION_VALUE
EDITIONS = tuple(ADDITIONS)


def header_rule(case, editions, environment, requirement,
                clause='Conformance and standard headers', kind='required', header=None):
    return dict(id=case, clause=clause, kind=kind, editions=editions,
                environment=environment, requirement=requirement, cases=[case], header=header)


def header_rules():
    for index, names in enumerate(ADDITIONS.values()):
        for name in names.split():
            editions = EDITIONS[index:]
            environment = 'all' if name in FREESTANDING_HEADERS else 'hosted'
            requirement = f'Include <{name}.h> twice in an otherwise empty translation unit.'
            if name in OPTIONAL_HEADERS:
                macro = OPTIONAL_HEADERS[name]
                yield header_rule(f'library.header.{name}', tuple(edition for edition in editions if edition != 99),
                                  environment, f'{requirement} Applies when {macro} is absent.',
                                  kind='conditional', header=name)
                if 99 in editions:
                    yield header_rule(f'library.header-c99.{name}', (99,), environment, requirement, header=name)
            else:
                yield header_rule(f'library.header.{name}', editions, environment, requirement, header=name)
            if name in FREESTANDING_C23_PARTIAL:
                yield header_rule(f'library.freestanding-header.{name}', (23,), 'freestanding',
                                  f'Include <{name}.h> twice to access the C23 freestanding interface.', header=name)
            if name in HEADER_VERSIONS:
                form = ('the token 202311L' if name in VERSION_TOKEN
                        else 'an integer constant expression equal to 202311L')
                version_environment = 'all' if name == 'string' else environment
                yield header_rule(f'library.header-version.{name}', (23,), version_environment,
                                  f'Define __STDC_VERSION_{name.upper()}_H__ as {form}.',
                                  clause='C23 Clause 7', kind='conditional' if name in OPTIONAL_HEADERS else 'required',
                                  header=name)
    yield header_rule('library.headers.combined', EDITIONS, 'all',
                      'Include all applicable standard headers for the edition together.')


def header_cases():
    return {
        rule['id']: (('preprocess', 'compile') if rule['id'].startswith('library.header-version.')
                     else ('compile',), ('default',))
        for rule in header_rules()
    }


def edition_headers(edition, environment):
    for introduced in EDITIONS[:EDITIONS.index(edition) + 1]:
        for name in ADDITIONS[introduced].split():
            if environment == 'freestanding' and name not in FREESTANDING_HEADERS:
                if edition == 23 and name in FREESTANDING_C23_PARTIAL:
                    yield name, f'library.freestanding-header.{name}'
            elif edition == 99 and name in OPTIONAL_HEADERS:
                yield name, f'library.header-c99.{name}'
            else:
                yield name, f'library.header.{name}'


def include_source(names):
    return ''.join(f'#include <{name}.h>\n' for name in names) + 'int cppgm_header_probe(void);\n'


def availability_source(names, edition):
    source = ['CPPGM_HEADERS_PROBE\n']
    has_optional_headers = edition in (11, 17, 23)
    for name in names:
        if has_optional_headers and name in OPTIONAL_HEADERS:
            source.append(f'#if {OPTIONAL_HEADERS[name]} == 1\nCPPGM_HEADER_DISABLED_{name}\n#endif\n')
        source.append(f'#if __has_include(<{name}.h>)\nCPPGM_HEADER_FOUND_{name}\n#endif\n')
    return ''.join(source)


def version_source(name):
    macro = f'__STDC_VERSION_{name.upper()}_H__'
    return (f'#include <{name}.h>\n'
            f'#ifdef {macro}\n'
            '#ifdef CPPGM_PROBE_VERSION_TOKENS\n'
            f'CPPGM_VERSION_BEGIN\n{macro}\nCPPGM_VERSION_END\n'
            '#else\n'
            f'static_assert({macro} == 202311L);\n'
            '#endif\n#endif\nint cppgm_header_probe(void);\n')


def version_tokens(output):
    begin = 'identifier CPPGM_VERSION_BEGIN\n'
    end = 'identifier CPPGM_VERSION_END\n'
    _, found, tail = output.partition(begin)
    if not found:
        return None
    expansion, found, _ = tail.partition(end)
    if not found:
        raise ValueError('incomplete header version expansion')
    return expansion.splitlines()


def current_version_token(tokens):
    return len(tokens) == 1 and tokens[0].startswith('literal 202311L long int ')

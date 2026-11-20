#!/usr/bin/env python3
"""Package the self-compiled tools and LowIR library of a release for one platform."""
import argparse
import gzip
import hashlib
import io
import json
from pathlib import Path
import re
import subprocess
import tarfile

TOOLS = ['cppgm', 'pptoken', 'posttoken', 'ppexpr', 'preproc', 'abimangle', 'lowir', 'lowiropt', 'lowir2native']
PLATFORMS = {
    'linux-x86_64': 'libcppgm_lowir.so',
    'linux-aarch64': 'libcppgm_lowir.so',
    'macos-x86_64': 'libcppgm_lowir.dylib',
    'macos-arm64': 'libcppgm_lowir.dylib',
}
VERSION = re.compile(r'v[0-9]+\.[0-9]+\.[0-9]+(?:-(?:rc|beta|alpha)[0-9]+)?')
# The tag the Release workflow gives a pull request's packages.
TRIAL_TAG = 'v0.0.0'
# The object root of scripts/build_release_tools.sh.
STAGE = 'obj/release'

README = '''# cppgm {tag} for {platform}

- `bin/`: `cppgm` and the eight stage tools.
- `lib/`, `include/`: the LowIR library and its C headers (`lowir_interface.h`). See `docs/lowir-library.md` in
  the source archive.
- Source revision: {revision}.
- Compiler of the tools and the library: cppgm at this revision. The tools are its second-stage build; the
  third-stage build has the same bytes.
- Host toolchain of this build (first stage, linker and standard library): {host}.

Hosted compilation reads the standard headers of that host compiler at the paths of the build machine. A Linux
package looks for another GCC installation when the C++ library headers are not at those paths: it uses the
installation of `/usr/bin/g++`, or else the newest one that has the headers. `--gcc-install-dir=<dir>` names an
installation (`<prefix>/lib/gcc/<triple>/<version>`). The predefined macros stay those of the build's host
compiler. For another toolchain, pass `-nostdinc` and the header directories with `-isystem`, or build from the
source archive.
'''


def version_tag(tag):
    if not VERSION.fullmatch(tag):
        raise ValueError('expected a release tag such as v0.9.0 or v1.2.3-rc1')
    return tag


def source_version(root):
    """CPPGM_VERSION of dev/src/support/version.h."""
    text = (root / 'dev/src/support/version.h').read_text()
    return re.search(r'^#define CPPGM_VERSION "([^"]+)"$', text, re.MULTILINE).group(1)


def headers(source):
    """The library's C header and the headers of that directory it includes, by name."""
    found, pending = set(), ['lowir_interface.h']
    while pending:
        name = pending.pop()
        if name in found or not (source / name).is_file():
            continue
        found.add(name)
        pending += re.findall(r'^#include "([^"/]+)"', (source / name).read_text(), re.MULTILINE)
    return sorted(found)


def self_compiled(root, stage):
    """Check that cppgm compiled the stage's tools and the library: nothing else is packaged."""
    for tool in TOOLS:
        second = stage / 'bin/selfhost' / (tool + '-self')
        third = stage / 'bin/inception' / (tool + '-inception')
        missing = [str(path) for path in (second, third) if not path.is_file()]
        if missing:
            raise FileNotFoundError('build these before packaging: ' + ', '.join(missing))
        if second.read_bytes() != third.read_bytes():
            raise ValueError('%s: the second-stage and third-stage builds differ' % tool)
    # The library's build records its compiler in the first line of this file.
    stamp = root / 'dev/.lowir-library-toolchain'
    compiler = (stamp.read_text().splitlines() or [''])[0] if stamp.is_file() else ''
    if not compiler or (root / 'dev' / compiler).resolve() != (stage / 'bin/selfhost/cppgm-self').resolve():
        raise ValueError("the LowIR library is not a build of the stage's cppgm: " + (compiler or 'no build record'))


def members(root, stage, tag, platform, revision, host):
    """(archive path, bytes, mode) for each packaged file, in archive order."""
    dev = root / 'dev'
    self_compiled(root, stage)
    files = [('bin/' + tool, stage / 'bin/selfhost' / (tool + '-self'), 0o755) for tool in TOOLS]
    files += [('lib/libcppgm_lowir.a', dev / 'libcppgm_lowir.a', 0o644),
              ('lib/' + PLATFORMS[platform], dev / PLATFORMS[platform], 0o755),
              ('include/lowir_interface.h', dev / 'src/lowir_interface.h', 0o644),
              ('LICENSE', root / 'LICENSE', 0o644), ('NOTICE', root / 'NOTICE', 0o644)]
    files += [('include/' + name, dev / 'src' / name, 0o644) for name in headers(dev / 'src')
              if name != 'lowir_interface.h']
    missing = [str(path) for _, path, _ in files if not path.is_file()]
    if missing:
        raise FileNotFoundError('build these before packaging: ' + ', '.join(missing))
    result = [(name, path.read_bytes(), mode) for name, path, mode in files]
    text = README.format(tag=tag, platform=platform, revision=revision, host=host)
    return sorted(result + [('README.md', text.encode(), 0o644)])


def package(root, tag, platform, destination, host, stage=STAGE):
    version_tag(tag)
    # The trial tag of a pull request names no release.
    if tag != TRIAL_TAG and tag != 'v' + source_version(root):
        raise ValueError('the tag %s is not the source version v%s (dev/src/support/version.h)'
                         % (tag, source_version(root)))
    if platform not in PLATFORMS:
        raise ValueError('expected a platform: ' + ', '.join(sorted(PLATFORMS)))
    revision = subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=root, text=True).strip()
    prefix = 'cppgm-%s-%s' % (tag, platform)
    content = members(root, root / stage, tag, platform, revision, host)
    destination.mkdir(parents=True, exist_ok=True)
    archive = destination / (prefix + '.tar.gz')
    # Names, order, owners and times are fixed: equal inputs give equal bytes.
    with archive.open('xb') as output:
        with gzip.GzipFile(filename='', mode='wb', fileobj=output, mtime=0) as compressed:
            with tarfile.open(fileobj=compressed, mode='w', format=tarfile.PAX_FORMAT) as tar:
                for name, data, mode in content:
                    entry = tarfile.TarInfo(prefix + '/' + name)
                    entry.size, entry.mode, entry.mtime = len(data), mode, 0
                    tar.addfile(entry, io.BytesIO(data))
    record = dict(schema=2, tag=tag, platform=platform, source_sha=revision, compiler='cppgm ' + revision,
                  host_compiler=host, archive=archive.name,
                  sha256=hashlib.sha256(archive.read_bytes()).hexdigest(),
                  files={name: hashlib.sha256(data).hexdigest() for name, data, _ in content})
    with (destination / (prefix + '-provenance.json')).open('x') as output:
        output.write(json.dumps(record, indent=2) + '\n')
    return archive


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--tag', required=True)
    parser.add_argument('--platform', required=True, choices=sorted(PLATFORMS))
    parser.add_argument('--host', required=True, help="the host compiler's version line")
    parser.add_argument('--stage', default=STAGE, help='the object root of scripts/build_release_tools.sh')
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1], help='the source and build tree')
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    print(package(args.root, args.tag, args.platform, args.output, args.host, args.stage))

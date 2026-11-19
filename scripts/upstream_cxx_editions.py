"""Language spellings shared by the pinned upstream suite adapters."""

import re


ALIASES = {
    11: ('11', '0x'), 14: ('14', '1y'), 17: ('17', '1z'), 20: ('20', '2a'),
}
DIALECTS = {
    prefix + alias: prefix + str(edition)
    for edition, aliases in ALIASES.items()
    for prefix in ('c++', 'gnu++')
    for alias in aliases
}


def standard_pattern(edition):
    spellings = '|'.join(ALIASES[edition])
    return re.compile(rf'-std=(?:gnu\+\+|c\+\+)(?:{spellings})\b')

// N4861 [class.temporary]
// expect exit 0

struct Stamp {
  unsigned* log;
  unsigned digit;
  constexpr ~Stamp() { *log = *log * 10 + digit; }
};

struct Reference {
  const Stamp& stamp;
};

constexpr bool extended() {
  unsigned log = 0;
  {
    const unsigned& digit = Stamp{&log, 4}.digit;
    Reference ref{Stamp{&log, 3}};
    log = digit + ref.stamp.digit;
    if (log != 7)
      return false;
  }
  return log == 734;
}

static_assert(extended());
int main() {}

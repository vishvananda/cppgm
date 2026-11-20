"""Sized compile workloads for the C++14, C++17 and C++20 course profile.

A case contains its first supported edition, fixed setup, repeated work
and final checks. @ denotes the zero-based unit and SIZE the unit count.
"""

CASES = {
    'literals-cxx14': (14, '', """\
constexpr auto number@ = 0b10'10 + 1'000;
static_assert(number@ == 1010, "binary literal and separator");
""", ''),
    'literals-cxx17': (17, '', """\
static_assert(0x1.8p+2 == 6.0);
static_assert(u8'x' == 'x');
""", ''),
    'literals-cxx20': (20, """\
constexpr unsigned operator""_units(const char8_t*, decltype(sizeof(0)) size) { return size; }
template<char8_t C> struct Unit { static constexpr char8_t value = C; };
""", """\
constexpr char text@[] = u8"é";
static_assert(sizeof(text@) == 3 && u8"é"_units == 2);
static_assert(Unit<u8'x'>::value == u8'x');
""", ''),
    'optional-macros': (20, """\
#define CALL(x, ...) x __VA_OPT__(+ __VA_ARGS__)
#define JOIN(x, ...) x ## __VA_OPT__(__VA_ARGS__)
#define QUOTE(...) #__VA_OPT__(__VA_ARGS__)
#define VALUE_a 9
""", """\
#if CALL(1, JOIN(VALUE_, a)) != 10 || CALL(3) != 3
#error expansion
#endif
static_assert(sizeof(QUOTE(a)) == 2 && sizeof(QUOTE()) == 1);
""", ''),
    'constexpr-cxx14': (14, """\
template<int I> constexpr int quantity = I;
constexpr int sum(int i) {
  int out = 0;
  for (; i; --i) out += i;
  return out;
}
""", """\
static_assert(sum(quantity<@ % 16>) == (@ % 16) * ((@ % 16) + 1) / 2, "loop");
""", ''),
    'aggregate-cxx14': (14, '', """\
struct Flag@ { constexpr explicit operator bool() const { return true; } };
struct Point@ { int x = 4; int y = 5; };
constexpr Point@ p@{Flag@{} ? 8 : 9};
static_assert(p@.x + p@.y == 13, "aggregate defaults");
""", ''),
    'lambda-cxx14': (14, '', """\
int f@(int n) {
  auto ref = [initial = n](auto& value) -> decltype(auto) {
    value += initial;
    return (value);
  };
  return ++ref(n);
}
""", ''),
    'lookup-cxx17': (17, """\
struct First { constexpr int f(int) const { return 2; } };
struct Second { constexpr int f(char) const { return 3; } };
template<class... T> struct Join : T... { using T::f...; };
""", """\
namespace A@::B::C {
[[using gnu: unused]] constexpr Join<First, Second> join{};
struct Base { using First = int; using Second = char; };
struct Names : Base { using Base::First, Base::Second; };
static_assert(join.f(Names::First{}) + join.f(Names::Second{}) == 5);
}
""", ''),
    'aggregate-cxx17': (17, '#include <new>\n', """\
namespace A@ {
struct Base { int n; };
struct Point : Base { int m; };
struct alignas(64) Aligned { Aligned() = default; Aligned(const Aligned&) = delete; };
inline constexpr Point p{{4}, 5};
static_assert(p.n + p.m == 9);
Aligned result() { return Aligned(); }
Aligned* allocate() { return new Aligned(result()); }
}
""", ''),
    'control-cxx17': (17, """\
template<int I> constexpr int choose() {
  if constexpr (int n = I; I % 2) return n;
  else { int value[] = {n, n}; return value[0] + value[1]; }
}
""", """\
static_assert(choose<@>() == (@ % 2 ? @ : 2 * @));
""", ''),
    'deduction-cxx17': (17, """\
template<typename T> struct Box { T n; };
template<typename T> Box(T) -> Box<T>;
template<template<typename> typename C, auto... V> constexpr int sum() {
  return (C<int>{V}.n + ... + 0);
}
""", """\
constexpr Box box@{@};
static_assert(box@.n == @ && sum<Box, @, 1, 2>() == @ + 3);
""", ''),
    'classes-cxx17': (17, '', """\
namespace A@ {
enum class Mode : unsigned { first = 0, second = 1 };
struct Pair { Mode mode; int count; };
struct Copy {
  int x;
  constexpr Pair get() const { return [*this] { return Pair{Mode{1}, x}; }(); }
};
int read(int n) noexcept { return n; }
constexpr int use(const Copy& copy) {
  const auto [kind, value] = copy.get();
  return kind == Mode::second ? value : -1;
}
static_assert(use(Copy{@}) == @);
static_assert(noexcept(read(0)));
static_assert(!noexcept(static_cast<int (*)(int)>(read)(0)));
}
""", ''),
    'lookup-cxx20': (20, '', """\
namespace A@ {
enum class E { one = 1, two = 2 };
enum class F { three = 3 };
using enum E;
using F::three;
template<class T> using First = T::First;
struct Types { using First = E; };
static_assert(First<Types>::one == one && static_cast<int>(three) == 3);
struct Bitfield { unsigned width : 3 = 4; };
static_assert(Bitfield{}.width == 4);
}
""", ''),
    'comparison-cxx20': (20, '#include <compare>\n', """\
struct Point@ { int n; int data[2]; auto operator<=>(const Point@&) const = default; };
static_assert(Point@{1, {1, 2}} < Point@{1, {1, 3}});
static_assert(Point@{1, {1, 2}} == Point@{1, {1, 2}});
bool compare@(Point@ a, Point@ b) { return a <= b; }
""", ''),
    'constraints-cxx20': (20, """\
template<class T> concept Index = sizeof(T) == sizeof(int);
template<class T> concept Counted = requires(T t) {
  t.count();
  typename T::Tag;
  { t.count() } noexcept -> Index;
  requires (sizeof(T) > 0);
};
template<class T> concept Extended = Counted<T> && requires(T t) { t.extra(); };
constexpr int score(Counted auto value) { return value.count(); }
template<class T> requires Extended<T>
constexpr int score(T value) { return value.count() + value.extra(); }
""", """\
struct Data@ {
  using Tag = int;
  constexpr int count() const noexcept { return @; }
  constexpr int extra() const { return 3; }
  template<class T> friend constexpr int call(Data@ d, T t) requires Counted<T> {
    return score(d) + score(t);
  }
};
constexpr Counted auto data@ = Data@{};
constexpr Counted decltype(auto) copied@(Data@ value) { return value; }
static_assert(copied@(data@).count() == @);
static_assert(call(data@, data@) == 2 * (@ + 3));
""", ''),
    'lambda-cxx20': (20, '', """\
namespace A@ {
template<class T> concept Integral = sizeof(T) == sizeof(int);
using Closure = decltype([](int n) { return n + 1; });
static_assert(sizeof(Closure) > 0);
constexpr auto apply = []<class T> requires Integral<T>(T x, auto y)
  requires Integral<decltype(y)> { return x + y; };
static_assert(apply(@, 1) == @ + 1);
}
""", ''),
    'constexpr-cxx20': (20, """\
struct Object {
  int value;
  constexpr ~Object() { value = 0; }
};
consteval int calculate(int value) {
  try {
    auto* p = new Object[2]{{value}, {value + 1}};
    const int result = p[0].value + p[1].value;
    delete[] p;
    return result;
  } catch (...) { return -1; }
}
""", """\
constinit int answer@ = calculate(@);
static_assert(calculate(@) == 2 * @ + 1);
""", ''),
    'constexpr-heap-loop': (20, """\
constexpr unsigned evaluate(unsigned count) {
  unsigned result = 0;
  for (unsigned i = 0; i != count; ++i) {
    auto* data = new unsigned[32]{};
    data[31] = i;
    result += data[31];
    delete[] data;
  }
  return result;
}
""", '', 'static_assert(evaluate(SIZE) == SIZE * (SIZE - 1) / 2);\n'),
    'structural-cxx20': (20, """\
struct Key { int n; const int* address; };
extern constexpr int value = 9;
template<Key K> constexpr const Key* object() { return &K; }
""", """\
static_assert(object<Key{@, &value}>()->n == @);
static_assert(*object<Key{@, &value}>()->address == 9);
const Key* key@() { return object<Key{@, &value}>(); }
""", ''),
    'locations-cxx20': (20, """\
#include <source_location>
constexpr auto here(std::source_location from = std::source_location::current()) { return from; }
""", """\
static_assert(here().line() > 0 && here().file_name()[0] != 0);
const char* filename@() { return here().file_name(); }
""", ''),
    'library-cxx17': (17, """\
#include <optional>
#include <string_view>
#include <variant>
""", """\
std::optional<int> parse@(std::string_view s, std::variant<int, char> item) {
  if (s.empty()) return std::nullopt;
  return std::holds_alternative<int>(item) ? std::get<0>(item) + @ : std::get<1>(item);
}
""", ''),
    'overload-declarations': (20, 'template<int N> struct Tag {};\n', """\
template<class T> int pick(Tag<@>, T);
""", ''),
    'member-overload-declarations': (20, """\
template<int N> struct Tag {};
template<class T> struct Owner {
""", """\
int pick(Tag<@>) requires (sizeof(T) > 0);
""", '};\nstatic_assert(sizeof(Owner<int>) == 1);\n'),
    'constraint-head-overloads': (20, '', '''
template<class T> requires (sizeof(T) >= @ + 1) int pick(T);
''', ''),
    'constraint-trailing-overloads': (20, '', '''
template<class T> int pick(T) requires (sizeof(T) >= @ + 1);
''', ''),
    'using-member-templates': (17, """\
template<int N> struct Tag {};
struct Base {
""", """\
template<class T> int pick(Tag<@>, T) { return @; }
""", """\
};
struct Derived : Base { using Base::pick; };
int probe() { return Derived{}.pick(Tag<SIZE - 1>{}, 0); }
"""),
    'coroutine-suspensions': (20, """\
#include <coroutine>

struct Task {
  struct promise_type;
  using Handle = std::coroutine_handle<promise_type>;
  Handle handle;
  struct promise_type {
    int value = 0;
    Task get_return_object() noexcept { return {Handle::from_promise(*this)}; }
    std::suspend_always initial_suspend() noexcept { return {}; }
    std::suspend_always final_suspend() noexcept { return {}; }
    std::suspend_always yield_value(int n) noexcept { value = n; return {}; }
    void return_value(int n) noexcept { value = n; }
    void unhandled_exception() { value = -1; }
  };
};
struct Gate {
  int value;
  bool await_ready() const noexcept { return false; }
  void await_suspend(std::coroutine_handle<>) const noexcept {}
  int await_resume() const noexcept { return value; }
};
Task task(int input) {
  co_yield input;
""", """\
input += co_await Gate{@ & 1};
""", """\
  co_return input;
}
int main() {
  auto t = task(8);
  t.handle.resume();
  if (t.handle.promise().value != 8) return 2;
  for (int i = 0; i <= SIZE; ++i) t.handle.resume();
  int value = t.handle.promise().value;
  t.handle.destroy();
  return value == 8 + SIZE / 2 ? 0 : 1;
}
"""),
}


def dependent_using(size, first):
    setup = """\
template<int N> struct Tag {};
template<bool E> struct Enabled {};
template<class T> struct Select { static constexpr bool value = false; };
struct Base {
"""
    base = ''.join(f'template<class T> int pick(Tag<{i}>, T, Enabled<!Select<T>::value>* = nullptr);\n'
                   for i in range(size))
    derived = ''.join(f'template<class T> char pick(Tag<{i}>, T, Enabled<!Select<T>::value>* = nullptr);\n'
                      for i in range(size // 2, size // 2 + size))
    using = 'using Base::pick;\n'
    checks = f"""\
}};
static_assert(sizeof(Derived{{}}.pick(Tag<{size - 1}>{{}}, 0)) == 1);
static_assert(sizeof(Derived{{}}.pick(Tag<0>{{}}, 0)) == sizeof(int));
"""
    return setup + base + '};\nstruct Derived : Base {\n' + (using + derived if first else derived + using) + checks


def using_pack(size):
    bases = ', '.join(f'Base<{i}>' for i in range(size))
    return f"""\
template<int N> struct Tag {{}};
template<int N> struct Base {{
  template<class T> constexpr int pick(Tag<N>, T) const {{ return N; }}
}};
template<class... T> struct Derived : T... {{ using T::pick...; }};
static_assert(Derived<{bases}>{{}}.pick(Tag<{size - 1}>{{}}, 0) == {size - 1});
"""


def shared_constraint(size):
    clauses = ' && '.join(f'(Atom<{2*i}, T> || Atom<{2*i+1}, T>)' for i in range(size))
    return f"""\
template<int I, class T> concept Atom = (sizeof(T) > I % 4);
template<class T> concept Domain = {clauses};
template<class T> requires Domain<T> constexpr int pick(T) {{ return 1; }}
template<class T> requires (Domain<T> && Atom<999, T>) constexpr int pick(T) {{ return 2; }}
static_assert(pick(0) == 2);
"""


STRESS_CASES = {
    'using-import-first': (17, lambda size: dependent_using(size, True)),
    'using-import-last': (17, lambda size: dependent_using(size, False)),
    'using-pack-imports': (17, using_pack),
    'shared-constraint': (20, shared_constraint),
}

EDITIONS = {case: details[0] for case, details in CASES.items()}
EDITIONS.update({case: details[0] for case, details in STRESS_CASES.items()})


def source(case, size):
    if case in STRESS_CASES:
        return STRESS_CASES[case][1](size)
    _, prefix, unit, suffix = CASES[case]
    return prefix + ''.join(unit.replace('@', str(index)) for index in range(size)) + suffix.replace('SIZE', str(size))

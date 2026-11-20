// expect exit 0
int first = 2;
int second = 3;
int answer() { return 5; }
struct Data { int field; };
struct Addresses {
  int* pointer;
  int& reference;
  int (*function)();
  int Data::* member;
};
template<Addresses A> const Addresses* addresses() { return &A; }
constexpr Addresses left{&first, second, answer, &Data::field};
constexpr Addresses equal{&first, second, answer, &Data::field};
constexpr Addresses different{&second, first, answer, &Data::field};

struct Number { double value; };
union Variant { unsigned i; char c; };
template<auto V> constexpr const auto* value() { return &V; }
static_assert(value<Number{0.0}>() != value<Number{-0.0}>());
static_assert(value<Variant{.i = 0}>() != value<Variant{.c = 0}>());
static_assert(value<Variant{.c = 0}>() == value<Variant{.c = 0}>());

int main() {
  const Addresses* a = addresses<left>();
  Data data{7};
  return a != addresses<equal>() || a == addresses<different>() ||
         *a->pointer + a->reference + a->function() + data.*a->member != 17;
}

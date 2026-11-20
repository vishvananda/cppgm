// expect exit 0
struct Record {
  int key() const & noexcept { return 7; }
};

int twice(int n) noexcept { return n * 2; }

using Member = int (Record::*)() const &;
using Function = int (*)(int);

template<Member P> struct MemberAt {
  static constexpr Member value = P;
};
template<Function P> struct Call {
  static constexpr Function value = P;
};
template<auto P> using ConvertedMember = MemberAt<P>;
template<auto P> using ConvertedFunction = Call<P>;

constexpr Member direct_member = MemberAt<&Record::key>::value;
constexpr Function direct_function = Call<twice>::value;
constexpr Member member = ConvertedMember<&Record::key>::value;
constexpr Function function = ConvertedFunction<&twice>::value;

int main() {
  Record item;
  return direct_member == member && direct_function == function &&
    (item.*member)() == 7 && function(6) == 12 ? 0 : 1;
}

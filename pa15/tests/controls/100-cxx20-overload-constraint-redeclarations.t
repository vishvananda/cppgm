// Equivalent declarations can denote a non-first overload. expect exit 0
namespace N {
template<class T> concept Word = sizeof(T) == sizeof(int);
}
using N::Word;

template<class T> requires (sizeof(T) == 1) constexpr int classify(T) { return 1; }
template<Word T> constexpr int classify(T value) requires (sizeof(value) > 1);
template<class T> requires (sizeof(T) > sizeof(int)) constexpr int classify(T) { return 3; }

template<N::Word U> constexpr int classify(U item) requires (sizeof(item) > 1) { return 2; }
static_assert(classify('a') == 1);
static_assert(classify(0) == 2);
static_assert(classify(0LL) == 3);
int main() { return classify(0) - 2; }

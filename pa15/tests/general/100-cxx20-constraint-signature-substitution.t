template<class T> using Result = typename T::result;
template<class, class> concept TokenFor = true;

template<class F, TokenFor<void(Result<F>)> Token>
int submit(F, Token) { return 1; }

int submit(...) { return 2; }

struct Callback { using result = int; };

int main() {
    return submit(0, 0) != 2 || submit(Callback{}, 0) != 1;
}

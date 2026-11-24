#include <complex.h>
#include <complex.h>
#include <float.h>
#include <math.h>

static_assert(_Generic(CMPLXF(1, 2), float complex: 1, default: 0));
static_assert(_Generic(CMPLX(1, 2), double complex: 1, default: 0));
static_assert(_Generic(CMPLXL(1, 2), long double complex: 1, default: 0));

static constexpr long double complex precise = CMPLXL(LDBL_MIN, -0.0L);
static thread_local float complex thread_value = CMPLXF(2, -3);

#define COMPLEX_CASES(X, s) \
	X(cacos, s, 1, 0, 0, 0) \
	X(casin, s, 0, 0, 0, 0) \
	X(catan, s, 0, 0, 0, 0) \
	X(ccos, s, 0, 0, 1, 0) \
	X(csin, s, 0, 0, 0, 0) \
	X(ctan, s, 0, 0, 0, 0) \
	X(cacosh, s, 1, 0, 0, 0) \
	X(casinh, s, 0, 0, 0, 0) \
	X(catanh, s, 0, 0, 0, 0) \
	X(ccosh, s, 0, 0, 1, 0) \
	X(csinh, s, 0, 0, 0, 0) \
	X(ctanh, s, 0, 0, 0, 0) \
	X(cexp, s, 0, 0, 1, 0) \
	X(clog, s, 1, 0, 0, 0) \
	X(csqrt, s, 4, 0, 2, 0) \
	X(conj, s, 3, 4, 3, -4) \
	X(cproj, s, 3, 4, 3, 4)

#define CASE(name, s, x, y, re, im) { name##s, x, y, re, im },

#define CHECK_COMPLEX(check, T, s, make) \
	static int check(void) \
	{ \
		static const struct \
		{ \
			T complex (*call)(T complex); \
			int x, y, real, imag; \
		} cases[] = { COMPLEX_CASES(CASE, s) }; \
		T (*volatile real_part)(T complex) = (creal##s); \
		T (*volatile imag_part)(T complex) = (cimag##s); \
		for (unsigned i = 0; i < sizeof(cases) / sizeof(cases[0]); ++i) \
		{ \
			T complex (*volatile call)(T complex) = cases[i].call; \
			T complex z = call(make(cases[i].x, cases[i].y)); \
			T real = real_part(z) - cases[i].real; \
			T imag = imag_part(z) - cases[i].imag; \
			if (!(real > -0.00001 && real < 0.00001 && imag > -0.00001 && imag < 0.00001)) \
				return (int)i + 1; \
		} \
		T complex (*volatile power)(T complex, T complex) = cpow##s; \
		T (*volatile magnitude)(T complex) = cabs##s; \
		T (*volatile phase)(T complex) = carg##s; \
		T complex (*volatile project)(T complex) = cproj##s; \
		T complex p = power(make(2, 0), make(3, 0)); \
		T real = real_part(p); \
		if (!(real > 7.99999 && real < 8.00001) || imag_part(p) != 0) \
			return 18; \
		if (magnitude(make(3, 4)) != 5 || phase(make(1, 0)) != 0) \
			return 19; \
		T complex z = project(make(-INFINITY, -2)); \
		if (real_part(z) != INFINITY || imag_part(z) != 0 || !signbit(imag_part(z))) \
			return 20; \
		return 0; \
	}

CHECK_COMPLEX(check_float, float, f, CMPLXF)
CHECK_COMPLEX(check_double, double, , CMPLX)
CHECK_COMPLEX(check_long_double, long double, l, CMPLXL)

int main(void)
{
	if (creall(precise) != LDBL_MIN || !signbit(cimagl(precise)))
		return 1;
	if (crealf(thread_value) != 2 || cimagf(thread_value) != -3)
		return 2;
	int real_calls = 0, imag_calls = 0;
	double complex constructed = CMPLX(++real_calls, -++imag_calls);
	if (real_calls != 1 || imag_calls != 1 || creal(constructed) != 1 || cimag(constructed) != -1)
		return 3;
	int result = check_float();
	if (result)
		return 10 + result;
	result = check_double();
	if (result)
		return 40 + result;
	result = check_long_double();
	if (result)
		return 70 + result;
	return 0;
}

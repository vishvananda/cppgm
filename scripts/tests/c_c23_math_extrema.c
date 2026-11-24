#include <math.h>
#include <stdint.h>
#include <string.h>

#define CHECK(name, type, suffix) \
	static int name(void) \
	{ \
		static const struct \
		{ \
			type (*call)(type, type); \
			int unequal_result, equal_result; \
			int negative_zero, prefer_number; \
		} cases[] = { \
			{ fmaximum##suffix, 2, 5, 0, 0 }, \
			{ fminimum##suffix, -5, -5, 1, 0 }, \
			{ fmaximum_mag##suffix, -5, 5, 0, 0 }, \
			{ fminimum_mag##suffix, 2, -5, 1, 0 }, \
			{ fmaximum_num##suffix, 2, 5, 0, 1 }, \
			{ fminimum_num##suffix, -5, -5, 1, 1 }, \
			{ fmaximum_mag_num##suffix, -5, 5, 0, 1 }, \
			{ fminimum_mag_num##suffix, 2, -5, 1, 1 }, \
		}; \
		for (unsigned i = 0; i < sizeof(cases) / sizeof(cases[0]); ++i) \
		{ \
			type (*volatile call)(type, type) = cases[i].call; \
			if (call(-5, 2) != cases[i].unequal_result || call(2, -5) != cases[i].unequal_result || \
				call(-5, 5) != cases[i].equal_result || call(5, -5) != cases[i].equal_result) \
				return (int)i + 1; \
			type a = call((type) - 0.0, (type)0.0); \
			type b = call((type)0.0, (type) - 0.0); \
			if (a != 0 || b != 0 || !!signbit(a) != cases[i].negative_zero || !!signbit(b) != cases[i].negative_zero) \
				return (int)i + 9; \
			a = call(NAN, 2); \
			b = call(-3, NAN); \
			if (cases[i].prefer_number ? a != 2 || b != -3 : !isnan(a) || !isnan(b)) \
				return (int)i + 17; \
			if (!isnan(call(NAN, NAN))) \
				return (int)i + 25; \
		} \
		return 0; \
	}

CHECK(check_float, float, f)
CHECK(check_double, double, )
CHECK(check_long_double, long double, l)

int main(void)
{
	int status = check_float();
	if (status)
		return 10 + status;
	status = check_double();
	if (status)
		return 50 + status;
	status = check_long_double();
	if (status)
		return 90 + status;

	uint64_t signaling_bits = UINT64_C(0x7ff0000000000100);
	double signaling;
	memcpy(&signaling, &signaling_bits, sizeof(signaling));
	double (*volatile maximum)(double, double) = fmaximum;
	double (*volatile maximum_number)(double, double) = fmaximum_num;
	double quiet = maximum(signaling, 2);
	if (!isnan(quiet) || issignaling(quiet))
		return 123;
	return maximum_number(signaling, 2) != 2;
}

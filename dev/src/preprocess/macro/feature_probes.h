#pragma once

#include <cstdint>
#include <string>

// The language modes the hosted feature probes answer by (-fno-exceptions,
// -fno-rtti).
struct FeatureModes
{
	bool exceptions = true;
	bool rtti = true;
	uint8_t language = 11;
	bool pedantic_errors = false;
};

// Clang's `__has_feature ( identifier )` and `__has_extension`: whether
// this implementation provides the named language feature (`cxx_lambdas`,
// `cxx_exceptions` ...) or, by its trait-feature name (`is_pod`,
// `has_trivial_copy`, `underlying_type`), the type trait `__name` the parser
// recognizes (lex/gnu_builtins.h). `__name__` spells the same feature. The
// Edition extensions use the translation unit's default language policy.
// Header warning suppression is local and cannot advertise a feature.
bool IsProvidedFeature(const char* spelling, uint32_t length, const FeatureModes& modes, bool extension);

// SD-6 feature-test macros for the selected language standard. These describe
// this implementation, independently of the compiler that built it.
std::string LanguageFeatureMacros(const FeatureModes& modes);
bool IsLanguageFeatureMacro(const char* spelling, uint32_t length);

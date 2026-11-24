# Build the supplemental C23 headers and archive for wasm32-unknown-unknown.
CC = ../../cppgm
AR = wasm-ref-ar
BUILD_DIR ?= ../../../obj/dev/runtime/wasm-freestanding
RESOURCE_DIR ?= $(shell wasm-ref-clang++ -print-resource-dir)
WASI_LIBC ?= $(abspath $(RESOURCE_DIR)/../../../share/wasi-sysroot/lib/wasm32-wasip1/libc.a)

HEADERS := $(addprefix $(BUILD_DIR)/include/,__cppgm_search_result.h float.h limits.h stdarg.h stdbit.h stddef.h stdint.h stdlib.h string.h)
NOTICES := $(patsubst licenses/%,$(BUILD_DIR)/licenses/%,$(wildcard licenses/*.txt))
OBJECTS := $(addprefix $(BUILD_DIR)/,stdbit.o memalignment.o memset_explicit.o)
# The SDK provides all of these routines without WASI calls. The four
# helpers supply the internal symbols referenced by the public functions.
STRING_FUNCTIONS := memccpy memchr memcmp memcpy memmove memset strcat strchr strcmp strcpy strcspn strlen \
	strncat strncmp strncpy strpbrk strrchr strspn strstr
STRING_HELPERS := memrchr stpcpy stpncpy strchrnul
SDK_OBJECTS := $(addsuffix .c.obj,$(STRING_FUNCTIONS) $(STRING_HELPERS))
RUNTIME_CFLAGS := --target=wasm32-unknown-unknown -x c -std=c23 -ffreestanding -pedantic-errors \
	-nostdinc -isystem include -isystem "$(RESOURCE_DIR)/include" -O2

.PHONY: all
all: $(HEADERS) $(NOTICES) $(BUILD_DIR)/libcppgm-freestanding.a

$(BUILD_DIR)/include/%.h: include/%.h
	mkdir -p "$(@D)"
	cp "$<" "$@"

$(BUILD_DIR)/licenses/%.txt: licenses/%.txt
	mkdir -p "$(@D)"
	cp "$<" "$@"

$(BUILD_DIR)/%.o: %.c
	mkdir -p "$(@D)"
	$(CC) $(RUNTIME_CFLAGS) $(CPPFLAGS) $(CFLAGS) -MD -MP -MF "$(@:.o=.d)" -c "$<" -o "$@"

$(BUILD_DIR)/libcppgm-freestanding.a: $(OBJECTS) $(WASI_LIBC) Makefile
	@set -eu; \
	stage=$$(mktemp -d "$(@D)/.wasm-runtime.XXXXXX"); \
	trap 'rm -rf "$$stage"' EXIT; \
	$(AR) x --output="$$stage" "$(WASI_LIBC)" $(SDK_OBJECTS); \
	$(AR) rcs "$$stage/runtime.a" $(OBJECTS) $(addprefix "$$stage"/,$(SDK_OBJECTS)); \
	mv "$$stage/runtime.a" "$@"

-include $(OBJECTS:.o=.d)

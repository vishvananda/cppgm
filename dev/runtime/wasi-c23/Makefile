# Build supplemental C23 headers and runtime for WASI SDK 34's wasip1 sysroot.
CC = ../../cppgm
AR = wasm-ref-ar
BUILD_DIR ?= ../../../obj/dev/runtime/wasi-c23
RESOURCE_DIR ?= $(shell wasm-ref-clang++ -print-resource-dir)
WASI_SYSROOT ?= $(abspath $(RESOURCE_DIR)/../../../share/wasi-sysroot)

SHARED := ../wasm-freestanding
SHARED_HEADERS := __cppgm_search_result.h float.h limits.h stdarg.h stdbit.h stddef.h stdlib.h string.h
LOCAL_HEADERS := assert.h complex.h fenv.h inttypes.h math.h setjmp.h stdatomic.h stdint.h stdio.h time.h uchar.h wchar.h
NOTICES := $(patsubst $(SHARED)/licenses/%,$(BUILD_DIR)/licenses/%,$(wildcard $(SHARED)/licenses/*.txt))
HEADERS := $(addprefix $(BUILD_DIR)/include/,$(SHARED_HEADERS) $(LOCAL_HEADERS))
STDIO_SOURCES := printf scanf wprintf wscanf scan_integer vfprintf vfwprintf vfscanf vfwscanf \
	vsnprintf vswprintf vsscanf vswscanf
STDIO_OBJECTS := $(addprefix $(BUILD_DIR)/stdio/,$(addsuffix .o,$(STDIO_SOURCES)))
OBJECTS := $(addprefix $(BUILD_DIR)/,stdbit.o memalignment.o memset_explicit.o timespec_getres.o utf8.o \
	binary_conversion.o sized_free.o atomic_functions.o call_once.o strfrom.o fenv.o temporary_files.o \
	math_representation.o math_classification.o) $(STDIO_OBJECTS)
RUNTIME_CFLAGS := --target=wasm32-wasip1 --sysroot="$(WASI_SYSROOT)" -resource-dir="$(RESOURCE_DIR)" \
	-x c -std=c23 -pedantic-errors -isystem "$(BUILD_DIR)/include" -O2

.PHONY: all
all: $(HEADERS) $(NOTICES) $(BUILD_DIR)/libcppgm-wasi-c23.a

$(addprefix $(BUILD_DIR)/include/,$(LOCAL_HEADERS)): $(BUILD_DIR)/include/%.h: include/%.h
	mkdir -p "$(@D)"
	cp "$<" "$@"

$(addprefix $(BUILD_DIR)/include/,$(SHARED_HEADERS)): $(BUILD_DIR)/include/%.h: $(SHARED)/include/%.h
	mkdir -p "$(@D)"
	cp "$<" "$@"

$(BUILD_DIR)/licenses/%.txt: $(SHARED)/licenses/%.txt
	mkdir -p "$(@D)"
	cp "$<" "$@"

# Build the callable operations and temporary-name counter with Wasm atomics.
$(addprefix $(BUILD_DIR)/,atomic_functions.o temporary_files.o): RUNTIME_CFLAGS += -matomics

vpath %.c $(SHARED)
$(BUILD_DIR)/%.o: %.c Makefile | $(HEADERS)
	$(CC) $(RUNTIME_CFLAGS) $(CPPFLAGS) $(CFLAGS) -MD -MP -MF "$(@:.o=.d)" -c "$<" -o "$@"

$(STDIO_OBJECTS): $(BUILD_DIR)/stdio/%.o: stdio/%.c Makefile | $(HEADERS)
	mkdir -p "$(@D)"
	$(CC) $(filter-out -std=c23 -pedantic-errors,$(RUNTIME_CFLAGS)) -std=gnu23 -D_XOPEN_SOURCE=700 \
		'-Dhidden=__attribute__((visibility("hidden")))' $(CPPFLAGS) $(CFLAGS) \
		-MD -MP -MF "$(@:.o=.d)" -c "$<" -o "$@"

$(BUILD_DIR)/libcppgm-wasi-c23.a: $(OBJECTS) Makefile
	@set -eu; \
	stage=$$(mktemp -d "$(@D)/.wasi-runtime.XXXXXX"); \
	trap 'rm -rf "$$stage"' EXIT; \
	$(AR) rcs "$$stage/runtime.a" $(OBJECTS); \
	mv "$$stage/runtime.a" "$@"

-include $(OBJECTS:.o=.d)

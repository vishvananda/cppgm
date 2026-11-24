# Build supplemental C23 headers and runtime for WASI SDK 34's wasip1 sysroot.
CC = ../../cppgm
AR = wasm-ref-ar
BUILD_DIR ?= ../../../obj/dev/runtime/wasi-c23
RESOURCE_DIR ?= $(shell wasm-ref-clang++ -print-resource-dir)
WASI_SYSROOT ?= $(abspath $(RESOURCE_DIR)/../../../share/wasi-sysroot)

SHARED := ../wasm-freestanding
SHARED_HEADERS := float.h limits.h stdarg.h stdbit.h stddef.h stdlib.h string.h
LOCAL_HEADERS := assert.h setjmp.h stdint.h time.h uchar.h
HEADERS := $(addprefix $(BUILD_DIR)/include/,$(SHARED_HEADERS) $(LOCAL_HEADERS))
OBJECTS := $(addprefix $(BUILD_DIR)/,stdbit.o memalignment.o memset_explicit.o timespec_getres.o utf8.o)
RUNTIME_CFLAGS := --target=wasm32-wasip1 --sysroot="$(WASI_SYSROOT)" -resource-dir="$(RESOURCE_DIR)" \
	-x c -std=c23 -pedantic-errors -isystem "$(BUILD_DIR)/include" -O2

.PHONY: all
all: $(HEADERS) $(BUILD_DIR)/libcppgm-wasi-c23.a

$(addprefix $(BUILD_DIR)/include/,$(LOCAL_HEADERS)): $(BUILD_DIR)/include/%.h: include/%.h
	mkdir -p "$(@D)"
	cp "$<" "$@"

$(addprefix $(BUILD_DIR)/include/,$(SHARED_HEADERS)): $(BUILD_DIR)/include/%.h: $(SHARED)/include/%.h
	mkdir -p "$(@D)"
	cp "$<" "$@"

vpath %.c $(SHARED)
$(BUILD_DIR)/%.o: %.c | $(HEADERS)
	$(CC) $(RUNTIME_CFLAGS) $(CPPFLAGS) $(CFLAGS) -MD -MP -MF "$(@:.o=.d)" -c "$<" -o "$@"

$(BUILD_DIR)/libcppgm-wasi-c23.a: $(OBJECTS)
	$(AR) rcs "$@" $(OBJECTS)

-include $(OBJECTS:.o=.d)

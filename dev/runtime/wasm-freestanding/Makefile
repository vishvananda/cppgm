# Build the supplemental C23 headers and archive for wasm32-unknown-unknown.
CC = ../../cppgm
AR = wasm-ref-ar
BUILD_DIR ?= ../../../obj/dev/runtime/wasm-freestanding
RESOURCE_DIR ?= $(shell wasm-ref-clang++ -print-resource-dir)

HEADERS := $(addprefix $(BUILD_DIR)/include/,stdbit.h stdlib.h)
OBJECTS := $(addprefix $(BUILD_DIR)/,stdbit.o memalignment.o)
RUNTIME_CFLAGS := --target=wasm32-unknown-unknown -x c -std=c23 -ffreestanding -pedantic-errors \
	-nostdinc -Iinclude -isystem "$(RESOURCE_DIR)/include" -O2

.PHONY: all
all: $(HEADERS) $(BUILD_DIR)/libcppgm-freestanding.a

$(BUILD_DIR)/include/%.h: include/%.h
	mkdir -p "$(@D)"
	cp "$<" "$@"

$(BUILD_DIR)/%.o: %.c
	mkdir -p "$(@D)"
	$(CC) $(RUNTIME_CFLAGS) $(CPPFLAGS) $(CFLAGS) -MD -MP -MF "$(@:.o=.d)" -c "$<" -o "$@"

$(BUILD_DIR)/libcppgm-freestanding.a: $(OBJECTS)
	$(AR) rcs "$@" $(OBJECTS)

-include $(OBJECTS:.o=.d)

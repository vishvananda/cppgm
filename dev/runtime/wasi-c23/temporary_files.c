#define _GNU_SOURCE 1
#include <errno.h>
#include <fcntl.h>
#include <stdatomic.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <wasi/api.h>
#include <wasi/libc-find-relpath.h>
#include <wasi/libc.h>

/* Use the SDK accessor when building this object with Wasm atomics. */
#undef errno
#define errno (*__errno_location())

enum { hex_width = 16, name_attempts = 32 };
static const char prefix[] = "./.cppgm-";
static_assert(sizeof(prefix) + 2 * hex_width == L_tmpnam);

struct temporary_name {
    char path[L_tmpnam];
    char storage[FILENAME_MAX];
    char *relative;
    int directory;
};

static _Atomic(uint64_t) next_ticket;

static void write_hex(char *output, uint64_t number)
{
    static const char digits[] = "0123456789abcdef";
    for (int i = hex_width; i > 0; --i) {
        output[i - 1] = digits[number & 15];
        number >>= 4;
    }
}

static bool make_name(struct temporary_name *name, uint64_t salt)
{
    uint64_t ticket = atomic_load_explicit(&next_ticket, memory_order_relaxed);
    do {
        if (ticket == UINT64_MAX) {
            errno = EOVERFLOW;
            return false;
        }
    } while (!atomic_compare_exchange_weak_explicit(&next_ticket, &ticket, ticket + 1,
                                                    memory_order_relaxed, memory_order_relaxed));

    char *suffix = name->path + sizeof(prefix) - 1;
    memcpy(name->path, prefix, sizeof(prefix) - 1);
    write_hex(suffix, salt);
    write_hex(suffix + hex_width, ticket);
    name->path[L_tmpnam - 1] = '\0';
    name->relative = name->storage;
    const char *absolute_prefix;
    name->directory = __wasilibc_find_relpath(name->path, &absolute_prefix,
                                             &name->relative, sizeof(name->storage));
    return name->directory >= 0;
}

char *tmpnam(char *result)
{
    static char buffer[L_tmpnam];
    struct temporary_name name;
    uint64_t salt;
    if (getentropy(&salt, sizeof(salt)) != 0)
        return NULL;
    for (unsigned attempt = 0; attempt < name_attempts; ++attempt) {
        if (!make_name(&name, salt))
            return NULL;
        struct stat metadata;
        if (fstatat(name.directory, name.relative, &metadata, AT_SYMLINK_NOFOLLOW) == 0)
            continue;
        if (errno != ENOENT)
            return NULL;
        if (result == NULL)
            result = buffer;
        return memcpy(result, name.path, sizeof(name.path));
    }
    errno = EEXIST;
    return NULL;
}

static bool can_remove_created_file(int directory)
{
    const __wasi_rights_t rights = __WASI_RIGHTS_PATH_CREATE_FILE | __WASI_RIGHTS_PATH_UNLINK_FILE;
    __wasi_fdstat_t state;
    const __wasi_errno_t error = __wasi_fd_fdstat_get(directory, &state);
    if (error != 0 || (state.fs_rights_base & rights) != rights) {
        errno = error != 0 ? error : EACCES;
        return false;
    }
    return true;
}

static FILE *open_temporary_stream(const struct temporary_name *name, int descriptor)
{
    const bool removed = __wasilibc_unlinkat(name->directory, name->relative) == 0;
    FILE *stream = removed ? fdopen(descriptor, "w+b") : NULL;
    if (stream != NULL)
        return stream;

    const int error = errno;
    close(descriptor);
    if (!removed) {
        const int cleanup = __wasilibc_unlinkat(name->directory, name->relative);
        (void)cleanup;
    }
    errno = error;
    return NULL;
}

FILE *tmpfile(void)
{
    struct temporary_name name;
    uint64_t salt;
    if (getentropy(&salt, sizeof(salt)) != 0)
        return NULL;
    for (unsigned attempt = 0; attempt < name_attempts; ++attempt) {
        if (!make_name(&name, salt) || !can_remove_created_file(name.directory))
            return NULL;
        const int descriptor = openat(name.directory, name.relative, O_RDWR | O_CREAT | O_EXCL, 0600);
        if (descriptor >= 0)
            return open_temporary_stream(&name, descriptor);
        if (errno != EEXIST)
            return NULL;
    }
    errno = EEXIST;
    return NULL;
}

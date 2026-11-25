#if defined(__APPLE__)
/* Mach-O chained fixups require four-byte alignment. The pointer
   fields lie at offsets of four bytes in the packed records. */
typedef unsigned int descriptor_size;
typedef unsigned int slot_marker;
#define PACKED_RECORD __attribute__((packed, aligned(4)))
#else
typedef unsigned short descriptor_size;
typedef unsigned char slot_marker;
#define PACKED_RECORD __attribute__((packed))
#endif

struct Descriptor {
    descriptor_size size;
    unsigned long address;
} PACKED_RECORD;

struct Slot {
    slot_marker tag;
    const int *pointer;
    slot_marker tail;
} PACKED_RECORD;

extern int payload[4];
extern const struct Descriptor descriptors[2];
extern const struct Slot slots[2];
int check_addresses(void);

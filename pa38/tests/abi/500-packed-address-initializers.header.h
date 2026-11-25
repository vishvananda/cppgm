struct Descriptor {
    unsigned short size;
    unsigned long address;
} __attribute__((packed));

struct Slot {
    unsigned char tag;
    const int *pointer;
    unsigned char tail;
} __attribute__((packed));

extern int payload[4];
extern const struct Descriptor descriptors[2];
extern const struct Slot slots[2];
int check_addresses(void);

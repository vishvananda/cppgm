typedef int Index;
typedef int Index;

struct Packet
{
    int size;
    struct { Index index; };
};

int main(void)
{
    struct Packet packet = { 2, { 42 } };
    return packet.size != 2 || packet.index != 42;
}

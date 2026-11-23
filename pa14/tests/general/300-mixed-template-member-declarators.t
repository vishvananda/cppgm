template<unsigned Width>
struct Packet {
    unsigned ordinary, code : Width, read() const;
};

template<unsigned Width>
unsigned Packet<Width>::read() const {
    return ordinary + code;
}

int main() {
    Packet<3> small = { 17, 3 };
    Packet<6> large = { 19, 37 };
    return small.read() != 20 || large.read() != 56;
}

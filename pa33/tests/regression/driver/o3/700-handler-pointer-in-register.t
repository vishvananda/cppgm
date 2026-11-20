// At -O3, a pointer local that a cleanup reads and the loop stores is still
// stored for the cleanup, but its other reads use the value in a register:
// only the cleanup loads the cell pointer of a growing tape. The first run
// throws after the tape grew, so its cleanup must free the new cells.
struct Tape
{
    unsigned char* cells;
    unsigned size;
    Tape() : cells(new unsigned char[4]()), size(4) {}
    ~Tape() { delete[] cells; }
};

__attribute__((noinline)) unsigned char* grow(unsigned char* cells, unsigned size)
{
    unsigned char* wider = new unsigned char[size * 2]();
    for (unsigned i = 0; i < size; ++i)
        wider[i] = cells[i];
    delete[] cells;
    return wider;
}

__attribute__((noinline)) void note(unsigned v)
{
    if (v > 200)
        throw v;
}

__attribute__((noinline)) unsigned run(const char* code, unsigned n)
{
    Tape tape;
    unsigned at = 0, out = 0;
    for (unsigned pc = 0; pc < n; ++pc)
        switch (code[pc])
        {
        case '+':
            tape.cells[at]++;
            break;
        case '>':
            if (++at == tape.size)
            {
                tape.cells = grow(tape.cells, tape.size);
                tape.size *= 2;
            }
            break;
        case '.':
            note(tape.cells[at]);
            out = out * 3 + tape.cells[at];
            break;
        }
    return out;
}

int main()
{
    char code[220] = ">>>>>";
    for (unsigned i = 5; i < 206; ++i)
        code[i] = '+';
    code[206] = '.';
    try
    {
        run(code, 207);
        return 1;
    }
    catch (unsigned v)
    {
        if (v != 201)
            return 2;
    }
    return run("++.>+++.>.+.>>>>+.", 18) == 247 ? 0 : 3;
}

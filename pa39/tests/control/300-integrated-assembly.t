extern "C" int from_assembly(int);

extern "C" int from_cpp(int n)
{
    return n + 2;
}

int main()
{
    return from_assembly(0) + from_assembly(10);
}

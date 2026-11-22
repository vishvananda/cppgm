struct Pair { int first, last; };
struct Row { unsigned elements[18]; };

static volatile struct Pair input = { 5, 7 };
static volatile struct Pair output;
static volatile struct Row row = { { [0] = 11, [17] = 13 } };

static struct Pair read_pair(volatile struct Pair *source)
{
    return *source;
}

static int sum(struct Pair value)
{
    return value.first + value.last;
}

int main(void)
{
    volatile struct Pair local = input;
    struct Pair plain = { 2, 3 };
    output = (sum(input) == 12 ? read_pair(&local) : plain);
    (void)input;
    input;
    read_pair(&input);

    struct Row saved = row;
    row = saved;
    return !(output.first == 5 && output.last == 7 &&
             saved.elements[0] == 11 && row.elements[17] == 13);
}

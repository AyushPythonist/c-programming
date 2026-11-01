
#include <stdio.h>

union Data
{
    int number;
    float decimal;
    char character;
};

int main()
{
    union Data d;

    d.number = 100;
    printf("Integer: %d\n", d.number);

    d.decimal = 25.5;
    printf("Float: %.2f\n", d.decimal);

    d.character = 'A';
    printf("Character: %c\n", d.character);

    printf("Size of union: %zu bytes\n", sizeof(d));

    return 0;
}

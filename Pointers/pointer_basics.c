
#include <stdio.h>

int main()
{
    int number = 10;

    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Value stored in pointer: %p\n", (void *)ptr);

    return 0;
}

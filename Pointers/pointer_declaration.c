
#include <stdio.h>

int main()
{
    int number = 50;
    float price = 99.5;
    char grade = 'A';

    int *intPtr = &number;
    float *floatPtr = &price;
    char *charPtr = &grade;

    printf("Integer value: %d\n", *intPtr);
    printf("Float value: %.2f\n", *floatPtr);
    printf("Character value: %c\n", *charPtr);

    return 0;
}

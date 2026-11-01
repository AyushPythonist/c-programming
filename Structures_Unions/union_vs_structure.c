
#include <stdio.h>

struct Student
{
    int age;
    float marks;
    char grade;
};

union Data
{
    int age;
    float marks;
    char grade;
};

int main()
{
    struct Student s1;
    union Data d1;

    printf("Structure Size: %zu bytes\n", sizeof(s1));
    printf("Union Size: %zu bytes\n", sizeof(d1));

    return 0;
}

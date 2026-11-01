
#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student s1 = {"Ayush", 19, 85.5};

    // Access structure members
    printf("Before updating:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    // Modify structure members
    s1.age = 20;
    s1.marks = 92.5;

    printf("\nAfter updating:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

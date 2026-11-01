
#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student s1 = {"Ayush", 18, 85.5};

    printf("Student Details\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}

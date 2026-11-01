
#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

void display(struct Student s)
{
    printf("Student Details\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main()
{
    struct Student s1 = {"Ayush", 19, 85.5};

    display(s1);

    return 0;
}

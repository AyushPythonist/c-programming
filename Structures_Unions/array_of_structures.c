
#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student students[3] = {
        {"Ayush", 19, 85.5},
        {"Arjun", 20, 90.0},
        {"Rahul", 21, 78.5}
    };

    printf("Student Records\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}

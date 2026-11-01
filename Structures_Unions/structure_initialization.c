
#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    // Method 1: Positional initialization
    struct Student s1 = {"Ayush", 19, 85.5};

    // Method 2: Designated initialization
    struct Student s2 = {
        .name = "Arjun",
        .age = 20,
        .marks = 90.5
    };

    // Method 3: Initialize first, then assign members
    struct Student s3;

    s3.age = 21;
    s3.marks = 78.5;

    snprintf(s3.name, sizeof(s3.name), "%s", "Rahul");

    printf("Student 1: %s, %d, %.2f\n",
           s1.name, s1.age, s1.marks);

    printf("Student 2: %s, %d, %.2f\n",
           s2.name, s2.age, s2.marks);

    printf("Student 3: %s, %d, %.2f\n",
           s3.name, s3.age, s3.marks);

    return 0;
}

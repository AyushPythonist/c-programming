
#include <stdio.h>

struct Address
{
    char city[50];
    int pincode;
};

struct Student
{
    char name[50];
    int age;
    struct Address address;
};

int main()
{
    struct Student s1 = {
        "Ayush",
        19,
        {"Pune", 410343}
    };

    printf("Student Details\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    printf("City: %s\n", s1.address.city);
    printf("Pincode: %d\n", s1.address.pincode);

    return 0;
}

#include <stdio.h>

int main()
{
    int age;
    float marks;
    char grade;

    // Output
    printf("Enter your age: ");

    // Input
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // Display output
    printf("\n--- Student Details ---\n");
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}

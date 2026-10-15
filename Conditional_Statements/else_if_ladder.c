#include <stdio.h>

int main()
{
int marks;

printf("Enter your marks: ");
scanf("%d", &marks);

if (marks >= 90 && marks <= 100)
{
    printf("Grade: A\n");
}
else if (marks >= 75 && marks < 90)
{
    printf("Grade: B\n");
}
else if (marks >= 60 && marks < 75)
{
    printf("Grade: C\n");
}
else if (marks >= 40 && marks < 60)
{
    printf("Grade: D\n");
}
else if (marks >= 0 && marks < 40)
{
    printf("Grade: F\n");
}
else
{
    printf("Invalid marks!\n");
}

return 0;

}

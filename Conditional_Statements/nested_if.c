#include <stdio.h>

int main()
{
int age;
int has_id;

printf("Enter your age: ");
scanf("%d", &age);

if (age >= 18)
{
    printf("Do you have an ID? (1 = Yes, 0 = No): ");
    scanf("%d", &has_id);

    if (has_id == 1)
    {
        printf("Entry allowed.\n");
    }
    else
    {
        printf("ID is required.\n");
    }
}
else
{
    printf("You are under 18. Entry denied.\n");
}

return 0;

}

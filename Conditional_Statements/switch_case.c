#include <stdio.h>

int main()
{
int choice;

printf("===== MENU =====\n");
printf("1. Pizza\n");
printf("2. Burger\n");
printf("3. Sandwich\n");
printf("4. Exit\n");

printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice)
{
    case 1:
        printf("You selected Pizza.\n");
        break;

    case 2:
        printf("You selected Burger.\n");
        break;

    case 3:
        printf("You selected Sandwich.\n");
        break;

    case 4:
        printf("Exiting program.\n");
        break;

    default:
        printf("Invalid choice!\n");
}

return 0;

}

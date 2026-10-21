
#include <stdio.h>

int main()
{
    char name[] = "Ayush";

    printf("Name: %s\n", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }

    return 0;
}

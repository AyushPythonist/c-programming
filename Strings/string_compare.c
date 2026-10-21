
#include <stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int i = 0;
    int equal = 1;

    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            equal = 0;
            break;
        }

        i++;
    }

    if (equal == 1)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}

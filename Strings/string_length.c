
#include <stdio.h>

int main()
{
    char str[] = "Programming";
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    printf("String: %s\n", str);
    printf("Length: %d\n", length);

    return 0;
}


#include <stdio.h>

int main()
{
    char source[] = "Hello C";
    char destination[50];
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

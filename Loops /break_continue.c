#include <stdio.h>

// break:- immediately terminates the loop.

// continue:- skips the current iteration and moves to the next iteration of the loop.

int main()
{
printf("Using continue:\n");

for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    {
        continue;
    }

    printf("%d ", i);
}

printf("\n\nUsing break:\n");

for (int i = 1; i <= 10; i++)
{
    if (i == 5)
    {
        break;
    }

    printf("%d ", i);
}

printf("\n");

return 0;

}

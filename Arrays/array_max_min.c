
#include <stdio.h>

int main()
{
    int arr[5] = {25, 10, 45, 5, 30};
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}

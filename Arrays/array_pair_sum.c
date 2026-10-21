
#include <stdio.h>

int main()
{
    int arr[] = {2, 7, 4, 5, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    printf("Pairs with sum %d:\n", target);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d + %d = %d\n",
                       arr[i], arr[j], target);
            }
        }
    }

    return 0;
}

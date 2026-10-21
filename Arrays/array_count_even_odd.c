
#include <stdio.h>

int main()
{
    int arr[] = {10, 15, 22, 33, 40, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);

    return 0;
}

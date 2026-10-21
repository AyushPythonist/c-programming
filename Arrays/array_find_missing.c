
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;
    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}

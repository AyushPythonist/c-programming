
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 20, 40, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++)
    {
        int found = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }

    printf("\n");
    return 0;
}

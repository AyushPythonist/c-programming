
#include <stdio.h>

int main()
{
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    int found = 0;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found.\n");
    }

    return 0;
}

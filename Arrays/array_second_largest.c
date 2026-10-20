
#include <stdio.h>

int main()
{
    int arr[] = {10, 25, 45, 30, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int second = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second)
        {
            second = arr[i];
        }
    }
  
  printf("Second-largest element = %d\n", second);

  return 0;
}

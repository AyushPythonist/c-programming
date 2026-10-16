#include <stdio.h>

int main()
{
int n, i = 1, sum = 0;

printf("Enter a number: ");
scanf("%d", &n);

while (i <= n)
{
    sum = sum + i;
    i++;
}

printf("Sum = %d\n", sum);

return 0;

}

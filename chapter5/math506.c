#include <stdio.h>

// math 5.6 (cpbook)

int main()
{
    int i, n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1, sum = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sumation is %d\n", sum);

    return 0;
}
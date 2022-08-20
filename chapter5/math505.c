#include <stdio.h>

// math 5.5 (cpbook)

int main()
{
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    sum = (n * (n + 1) / 2);

    printf("Summation is %d\n", sum);

    return 0;
}
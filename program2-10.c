#include <stdio.h>

// program 2.10 (cpbook)

int main() 
{
    double a, b, sum;

    printf("Enter 1st number: ");

    scanf("%lf", &a);

    printf("Enter 2nd number: ");

    scanf("%lf", &b);

    sum = a + b;

    printf("Sum is: %.2lf\n", sum);

    return 0;
}
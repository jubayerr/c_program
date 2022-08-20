#include <stdio.h>

// math GCD (efficient program) 5.9 (cpbook)

int main()
{
    int a, b, t, x, gcd;

    printf("Enter the value of a and b: ");

    scanf("%d %d", &a, &b);

    if (a == 0)
        gcd = a;
    else if (b == 0)
        gcd = b;
    else
    {
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }
    printf("GCD is %d\n", gcd);

    return 0;
}
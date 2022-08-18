#include <stdio.h>

// multiplication table by loop 4.6 (cpbook)

int main()
{
    int n = 5, i = 1;

    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i = i + 1;
    }
    return 0;
}
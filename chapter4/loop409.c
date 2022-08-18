#include <stdio.h>

// multiplication by add number in loop

int main()
{
    int m, n = 5;
    int i;
    m = 0;

    for (i = 1; i <= 10; i++)
    {
        m = m + n;
        printf("%d x %d = %d\n", n, i, m);
    }
    return 0;
}
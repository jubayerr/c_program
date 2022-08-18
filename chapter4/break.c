#include <stdio.h>

// break in loop 4.4 (cpbook)

int main()
{
    int n = 1;

    while (n <= 10)
    {
        printf("%d\n", n);
        n++;
        if (n > 5)
        {
            break;
        }
    }

    return 0;
}
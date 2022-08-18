#include <stdio.h>

// nested loop 4.11 (cpbook)

int main()
{
    int n, m, i, j;

    scanf("%d\n", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &m);

        for (j = 10; j <= m; j++)
        {
            if (j % 11 == 0)
            {
                continue;
            }
            printf("%d\n", j);
        }
    }
    return 0;
}
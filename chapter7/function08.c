#include <stdio.h>

// function (find max array) 7.8 (cpbook)

int find_max(int ara[], int n);

int main()
{
    int ara[] = {0, 2, 3, 5, 4, 6, 7, 33, 44, 22, 55};
    int n = 11;

    int max = find_max(ara, n);
    printf("Maximum value is: %d\n", max);

    return 0;
}

int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (ara[i] > max)
        {
            max = ara[i];
        }
    }
    return max;
}
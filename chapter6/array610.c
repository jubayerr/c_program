#include <stdio.h>

// reverse array 6.10 (cpbook)

int main()
{
    int num_lists[] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int i, j, temp;

    for (i = 0, j = 9; i < 5; i++, j--)
    {
        temp = num_lists[j];
        num_lists[j] = num_lists[i];
        num_lists[i] = temp;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", num_lists[i]);
    }
    return 0;
}
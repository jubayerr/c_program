#include <stdio.h>

// array 6.8 (cpbook)

int main()
{
    int numList[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    for (int i = 0; i < 10; i++)
    {
        printf("%dth element is %d\n", i, numList[i]);
    }
    return 0;
}
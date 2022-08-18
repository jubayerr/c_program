#include <stdio.h>

// conditional logic 3.8 (cpbook)

int main()
{
    int number; // remainder
    number = 7;
    // remainder = number % 2;

    if (number % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;
}
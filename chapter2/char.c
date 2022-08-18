#include <stdio.h>

// program 2.12 (cpBook)

int main()
{
    char ch;

    printf("Enter the first letter of your name: ");

    // scanf("%c", &ch);
    ch = getchar();

    printf("The first latter of your name is: %c\n", ch);

    return 0;
}
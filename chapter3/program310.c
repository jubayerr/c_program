#include <stdio.h>

// conditional logic 3.10 (cpbook)

int main()
{
    printf("Enter a letter:");

    char ch;
    ch = getchar();

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }
    return 0;
}
#include <stdio.h>

// conditional logic 3.13 (cpbook)

int main()
{
    printf("Enter any letter: ");

    char ch;
    ch = getchar();

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is vowel\n", ch);
    }
    else
    {
        printf("%c is consonant\n", ch);
    }
    return 0;
}
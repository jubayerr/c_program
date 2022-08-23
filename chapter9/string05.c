#include <stdio.h>

// string (length of a string) 9.5 (cpbook)

// declare function
int string_length(char str[]);

// main function
int main()
{
    char country[100];
    int length;

    while (1 == scanf("%s", country))
    {
        length = string_length(country);
        printf("length: %d\n", length);
    }
    return 0;
}

// length function
int string_length(char str[])
{
    int i, length;

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
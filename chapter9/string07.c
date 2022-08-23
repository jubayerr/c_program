#include <stdio.h>

// string (concatenate) 9.7 (cpbook)

int main()
{
    char str1[] = "bangla", str2[] = "desh", str3[12];
    int i, j, length1 = 6, length2 = 4;

    for (i = 0, j = 0; i < length1; i++, j++)
    {
        str3[j] = str1[i];
    }

    for (i = 0; i < length2; i++, j++)
    {
        str3[j] = str2[i];
    }

    str3[j] = '\0';

    printf("%s\n", str3);

    return 0;
}

int string_compare(char a[], char[b])
{
    int i, j;

    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] < b[i])
        {
            return -1;
        }
        if (a[i] > b[i])
        {
            return 1;
        }
    }
    if (string_length(a) == string_length(b))
    {
        return 0;
    }
    if (string_length(a) < string_length(b))
    {
        return -1;
    }
    if (string_length(a) > string_length(b))
    {
        return 1;
    }
}
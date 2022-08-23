#include <stdio.h>

// string (convert lowercase to uppercase) 9.4 (cpbook)

int main()
{
    char country_name[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '!', '\0'};

    int i, length;

    printf("%s\n", country_name);

    length = 10;

    for (i = 0; i < length; i++)
    {
        if (country_name[i] >= 97 && country_name[i] <= 122)
        {
            country_name[i] = 'A' + (country_name[i] - 'a');
        }
    }

    printf("%s\n", country_name);

    return 0;
}
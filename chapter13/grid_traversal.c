#include <stdio.h>

// Grid Traversal (cpbook)

int main()
{
    int x, y;
    char c;

    printf("please enter the initial position: ");
    scanf("%d %d", &x, &y);

    while (1)
    {
        scanf("%c", &c);

        if (c == 'S')
        {
            break;
        }
        else if (c == 'U')
        {
            x--;
        }
        else if (c == 'D')
        {
            x++;
        }
        else if (c == 'R')
        {
            y++;
        }
        else if (c == 'L')
        {
            y--;
        }
    }
    printf("Final position of the RoBot is: %d %d\n", x, y);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            for (int j = 0; j < 7; j++)
            {
                printf("%c", j % 9 / 3 + 97 + (i * 2));
            }
        }
        else
        {
            for (int j = 0; j < 9; j++)
            {

                printf("%c", j % 9 / 3 + 97 + (i * 2));
            }
        }

        printf(" ");
    }
    return 0;
}
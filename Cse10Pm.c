#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    for (int i = 2; i < 8; i++)
    {
        for (int j = i - 1; j > 0; j++)
        {
            printf("%d", i + j);
        }
        printf("\n");
    }

    return 0;
}

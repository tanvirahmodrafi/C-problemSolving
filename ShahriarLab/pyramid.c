#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i, j, k, l, m;
    for (i = 1; i < 11; i++)
    {
        for (j = 1; j <= 11 - i; j++)
        {
            printf("*");
        }

        for (k = 1; k <= i; k++)
        {
            printf("%d", k%10);
        }
        
        for (l = i-1; l > 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}

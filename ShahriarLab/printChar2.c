#include <stdio.h>
#include <stdlib.h>

// prints:
// aA
// aabC
// aaabb*E
// aaaabbb**G
// aaaaabbbb***I
// aaaaaabbbbb****K

int main()
{
    int i, j, k, l;
    char ch = 'a', ch2 = 'A', ch3 = 'b';
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= i ; j++)
        {
            printf("%c", ch);
        }
        if (i >= 1)
        {
            for (j = 1; j <= i ; j++)
            {
                printf("%c", ch3);
            }
        }
        if (i >= 2)
        {
            for (j = 1; j < i; j++)
            {
                printf("*");
            }
        }

        printf("%c\n", ch2);
        ch2 += 2;
    }
}
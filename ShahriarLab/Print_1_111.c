#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//prints: 1 111 11111 1111111

int main(void)
{
    int k = 0, i;
    for (i = 0; i <= 9; i += 2)
    {
        k += pow(10, i);
        printf("%d ", k);
        k += pow(10, i + 1);
    }
}
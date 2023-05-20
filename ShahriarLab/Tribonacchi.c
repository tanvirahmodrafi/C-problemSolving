#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int f,f1 = 0,f2 = 1,f3 = 1;

    printf("0 1 1 ");

    for (f = f1+f2+f3; f <= 45;)
    {
        printf("%d ",f); 
        
        f1=f2;
        f2=f3;
        f3=f;
        f = f1+f2+f3;
    }

    return 0;
}
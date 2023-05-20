#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
//This prints : aaacccebbbdddfccceeegdddff

int main()
{
    for (int i = 0; i < 26; i++)
    {
        printf("%c",(i%7/3*2+'a')+(i/7));
        
    }
    return 0;
}

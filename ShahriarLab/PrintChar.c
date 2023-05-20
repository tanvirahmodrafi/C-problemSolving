#include <stdio.h>
#include <stdlib.h>

// prints : aaabbbccc bbbcccddd cccdddeee dddeeefff eeefffg
//To print aaabbbccc cccdddeee eeefffggg ggghhhiii iiijjjk 
//replace the i to i*2;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            for (int j = 0; j < 7; j++)
            {
                printf("%c", j % 9 / 3 + 97 + (i));
            }
        }
        else
        {
            for (int j = 0; j < 9; j++)
            {

                printf("%c", j % 9 / 3 + 97+ (i) );
            }
        }

        printf(" ");
    }
    return 0;
}

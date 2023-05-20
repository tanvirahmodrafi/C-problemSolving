#include <stdio.h>
#include <stdlib.h>

//prints:
// aaabbbcccaaabbbccc
// aaabbbcccaaabbbccc
// aaabbbcccaaabbbccc
// bbbcccdddbbbcccddd
// bbbcccdddbbbcccddd
// bbbcccdddbbbcccddd
// cccdddeeecccdddeee
// cccdddeeecccdddeee
// cccdddeeecccdddeee
// aaabbbcccaaabbbccc
int main()
{
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 18; i++)
        {
            printf("%c", (i % 9 / 3 + 'a') + (j %9 / 3));
        }
        printf("\n");
    }
    return 0;
}
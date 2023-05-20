#include <stdio.h>
#include <math.h>

int main(void)
{
    int arr[7], i, target;
    scanf("%d", &target);
    for (i = 0; i <= 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("[%d,%d]\n", i, j);
            }
        }
    }
}
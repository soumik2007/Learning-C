#include <stdio.h>

int main()
{
    int arr[3][2][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d ", &arr[i][j][k]);
            }
        }
    }

    return 0;
}
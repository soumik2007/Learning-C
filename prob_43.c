#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[3];
        for (int i = 0; i < 3; i++)
        {
            printf("num %d = ", i+1);
            scanf("%d", &mul[i]);
        }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = (j + 1) * mul[i];
            printf("%d x %d = %d  \n", mul[i] , j+1 , arr[i][j]);
        }   
    }

    return 0;
}
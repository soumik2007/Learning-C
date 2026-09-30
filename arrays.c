// learning and practicing arrays
#include <stdio.h>

int main()
{
    // intro to array
    int number[10];
    number[0] = 2;
    number[1] = 4;

    printf("%d\n%d\n", number[0], number[1]);

    // using loop in array
    for (int i = 0; i < 10; i++)
    {
        printf("Type number %d :", i);
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("number[%d] = %d\n", i, number[i]);
    }
    // short array
    int num[4] = {12, 3, 4, 14};
    for (int i = 0; i < 4; i++)
    {
        printf("num[%d] = %d\n", i, num[i]);
    }

    // adress of array elements in memory
    int number[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Type number %d :", i);
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("number[%d] = %d addres = %d\n", i, number[i], &number[i]);
    }

    // using pointers to print array elements
    int num[4] = {12, 3, 4, 14};
    int *pnt = &num[0];
    for (int i = 0; i < 4; i++)
    {
        printf("number[%d] = %d addres = %d\n", i, *pnt, pnt);
        pnt++;
    }

    // 2D arrays
    int arr[3][2] = {{2, 3},
                     {4, 5},
                     {6, 7}};
    printf("%d ", arr[0][0]);
    printf("%d", arr[0][1]);
    printf("\n");
    printf("%d ", arr[1][0]);
    printf("%d", arr[1][1]);
    printf("\n");
    printf("%d ", arr[2][0]);
    printf("%d", arr[2][1]);

    // using for loop in 2D array
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}
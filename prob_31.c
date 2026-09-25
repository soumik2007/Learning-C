#include <stdio.h>

int patern(int);
int patern(int n)
{
    int row = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("\n");
        for (int a = 1; a <= row; a++)
        {
            printf("*");
        }
        row += 2;
    }
}

int main()
{
    patern(3);
    return 0;
}
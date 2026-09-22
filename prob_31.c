#include <stdio.h>

int patern(int);
int patern(int n)
{
    for (int i = 1; i <= n; i += 2)
    {
        for (int a = 1; a <= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    patern(5);
    return 0;
}
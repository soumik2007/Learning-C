#include <stdio.h>

int main()
{
    int n ;
    printf("Give Input: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0! = 1");
    }
    else
    {
        int factorial = 1;
        int i = n;
        while (i)
        {
            factorial *= i;
            i--;
        }
        printf("%d! = %d", n, factorial);
    }

    return 0;
}
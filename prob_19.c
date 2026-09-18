#include <stdio.h>

int main()
{
    int n;
    printf("Give Input: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0! = 1");
    }
    else
    {
        int factorial = 0;
        for (int i = n; i; i--)
        {
            factorial += i;
        }
        printf("%d! = %d", n, factorial);
    }

    return 0;
}
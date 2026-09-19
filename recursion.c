#include <stdio.h>

int factorial(int);
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}
int main()
{
    int n;
    printf("Input Number: ");
    scanf("%d",&n);
    printf("%d! = %d",n,factorial(n));
    return 0;
}
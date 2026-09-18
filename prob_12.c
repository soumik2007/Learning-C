#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    printf("Enter the 4th number: ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the largest number in %d, %d, %d, %d", a, a, b, c, d);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the largest number in %d, %d, %d, %d", b, a, b, c, d);
    }
    else if (c > b && c > a && c > d)
    {
        printf("%d is the largest number in %d, %d, %d, %d", c, a, b, c, d);
    }
    else
    {
        printf("%d is the largest number in %d, %d, %d, %d", d, a, b, c, d);
    }
    return 0;
}
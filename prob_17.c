#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    int i = 1;
    int sum_1 = 0;
    do
    {
        sum_1 += i;
        i++;
    } while (i <= 10);
    printf("%d\n", sum_1);

    return 0;
}

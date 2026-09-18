#include <stdio.h>

int main()
{
    int num = 0;
    while (num < 21)
    {
        if (num >= 10)
        {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}
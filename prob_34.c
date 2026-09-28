#include <stdio.h>
void change_value_10x(int *);
void change_value_10x(int *x)
{
    *x = *x * 10;
}
int main()
{
    int i = 2;
    printf("%d\n", i);
    change_value_10x(&i);
    printf("%d", i);

    return 0;
}
#include <stdio.h>

void count_posetive(int[], int);
void count_posetive(int a[], int n)
{
    int posetive = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            posetive += 1;
        }
    }
    printf("%d", posetive);
}
int main()
{
    int arr[5] = {1, 2, 4, 3, -6};
    count_posetive(arr, 5);
    return 0;
}
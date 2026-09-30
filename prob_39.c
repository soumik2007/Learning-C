#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int arr[10] ;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = (i+1) * num;
        printf("%d\n", arr[i]);
    }

    return 0;
}


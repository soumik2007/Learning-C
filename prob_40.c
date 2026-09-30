#include <stdio.h>

void printing_array(int[], int);
void printing_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void reverse_array(int[], int);
void reverse_array(int a[], int n){
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        i = n - 1 - j;
        printf("%d ",a[i]);
    }    
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printing_array(arr, 5);
    reverse_array(arr,5);

    return 0;
}
// 1234
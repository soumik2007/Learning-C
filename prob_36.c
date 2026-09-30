#include <stdio.h>

int main(){
    int arr[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    int* ptr = &arr[0];
    ptr += 2;
    printf("%d",*ptr);
    return 0;
}

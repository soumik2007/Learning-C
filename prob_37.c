#include <stdio.h>

int main(){
    int arr[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    printf("%d",*(arr+3));//prints the value of arr[3], 4th element of the array
    return 0;
}
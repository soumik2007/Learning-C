#include <stdio.h>

int main(){
    int a = 2;
    int b = 3;
    printf("%d\n",a); //output: 2
    printf("%d\n",b); //output: 3
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d\n",a); //output: 3
    printf("%d\n",b); //output: 2
    return 0;
}

// value of a and b are getting swaped
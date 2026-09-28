#include <stdio.h>

int main(){
    int i = 2;
    int* j = &i;
    printf("%d\n",&i);
    printf("%d\n",*&i);
    printf("%d\n",*j);
    printf("%d",j);
    return 0;
}
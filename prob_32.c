#include <stdio.h>

int main(){
    int i = 3;
    int* j = &i;
    
    printf("%p\n",&i);
    printf("%d",*j);

    return 0;
}
#include <stdio.h>
int pass(int );
int pass(int i){    
    printf("%u\n",&i);
}

int main(){
    int i = 3;
    printf("%u\n",&i);
    pass(3);

    return 0;
}
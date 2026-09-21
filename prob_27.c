#include <stdio.h>
float force(int);
float force(int m){
    printf("Force = %.1f N",m*9.8);
}
int main(){
    force(3);
    
    return 0;
}
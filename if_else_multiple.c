#include <stdio.h>

int main(){
    int a = 1 ; int b = 1;
    if(a&&b){
        printf("both %d and %d are true\n",a,b);
    }   
    if(a||b){
        printf("both %d or %d are true",a,b);
    }   
    return 0;
}
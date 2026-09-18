#include <stdio.h>

int main(){
    int age = 2;
    if(age%5==0){
        printf("we are inside if_1\n");
        printf("%dis devisable by 5\n\n",age);        
    }
    if(age>10){
        printf("we are inside if_2\n");
        printf("%dis greater than 10\n",age);
    }
    else{
        printf("we are inside else\n");
    }
    return 0;
}
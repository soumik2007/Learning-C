#include <stdio.h>

int main(){
    int a = 3;
    printf("%d %d %d \n",a,++a,a++);
    int b = 3;
    printf("%d %d %d \n",b++,++b,b);
    // it depends on the execution order, ask to gemini for clearing confusion 
    return 0;
}
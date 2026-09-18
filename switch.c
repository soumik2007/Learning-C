#include <stdio.h>

int main(){
    int a = 4;
    switch(a){
        case 1:
            printf("You are in case 1\n");
            break;
        case 2:
            printf("You are in case 2\n");
            break;
        case 3:
            printf("You are in case 3\n");
            break;
        case 4:
            printf("You are in case 4\n");
            break;
        case 5:
            printf("You are in case 5\n");
            break;
        default:
            printf("default case");
    }
    return 0;
}
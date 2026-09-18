#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while (i <= 3)
    {
        sum += i;
        i++;
        /*
        i = 1
        sum = 0+1 = 1
        i = 2
        sum = 1 + 2 = 3
        i = 3
        sum = 3 + 3 = 6
        */
    }
    printf("%d",sum);
    return 0;
}
#include <stdio.h>

int main(){
    int i = 0;
    for (int j = 0; j < 4; j++)
    {
        i = 4 - 1 - j;
        printf("%d",i);
    }
    return 0;
}
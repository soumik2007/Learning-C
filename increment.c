#include <stdio.h>

int main(){
    int i = 10;
    while (i < 11)
    {
        printf("the value of i is %d\n",i++);//at i++ 10 get printed then incriment to 11,output 10
        printf("the value of i is %d\n",++i);//at ++i 11 icriments to 12 then prints 12,output 12
    }
    
    return 0;
}
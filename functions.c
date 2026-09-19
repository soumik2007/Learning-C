#include <stdio.h>

int devide(int , int);//function prototype
int devide(int x, int y)//function defination
{
    printf("%d devided by %d is %d\n ",x,y,x/y);
    return (x/y);
}
int main(){
    devide(14,2); // function call
    int d = devide(24,8); // function call
    printf("%d",d);
    
    return 0;
}
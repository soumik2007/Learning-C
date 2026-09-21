#include <stdio.h>
int febonachi(int);
int febonachi(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    return febonachi(n-2) + febonachi(n-1);    
}
int main(){
        {
        printf("%d",febonachi(8));   
    }
    return 0;
}
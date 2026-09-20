#include <stdio.h>

float avg(float,float,float);
float avg(float x,float y,float z){
    
    printf("The average of %.0f ,%.0f and %.0f is %.1f",x,y,z,(x+y+z)/3);

}
int main(){
    avg(1,3,3);
    return 0;
}
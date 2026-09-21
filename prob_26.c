#include <stdio.h>

int Temp_converter(int);
int Temp_converter(int c)
{
    printf("The temprature in Fahrenheit is: %.1f", c * 1.8 + 32);
}

int main()
{
    Temp_converter(32);
    return 0;
}
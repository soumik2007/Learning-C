#include <stdio.h>

int main()
{
    // 97 to 122 all ascii values are for lower case english leters
    int leter = 'A';
    if (leter <= 122 && leter >= 97)
    {
        printf("The leter %c is lower cased ",leter);
    }
    else{
        printf("The leter %c is not lower cased ",leter);
    }
    return 0;
}
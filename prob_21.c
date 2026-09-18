#include <stdio.h>

int main()
{
    int n = 2 ;
    // printf("Number Input: ");
    // scanf("%d",&n);
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d is not a prime number", n);
                break;
            }
            else
            {
                printf("%d is a prime number", n);
                break;
            }
        }
    }
    else if (n == 2)
    {
        printf("%d is a prime number", n);
    }
    
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}

/*
CONDITION OF PRIME NUMBER:
1. greater than 1
2. two factors 1 and the number itself
*/
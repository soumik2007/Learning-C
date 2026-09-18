#include <stdio.h>

int main()
{
    float income;
    printf("Your income in Lakhs is : ");
    scanf("%f", &income);
    if (income < 2.5)
    {
        printf("Your tax is: %f L", income * 0);
    }
    else if (income <= 5 && income >= 2.5)
    {
        printf("Your tax is: %f L", (income - 2.5) * 0.05);
    }
    else if (income <= 10 && income >= 5)
    {
        printf("Your tax is: %f L", ((income - 5) * 0.2) + ((5 - 2.5) * 0.05));
    }
    else if (income > 10)
    {
        printf("Your tax is: %f L", ((income - 10) * 0.3) + ((10 - 5) * 0.2) + ((5 - 2.5) * 0.05));
    }
    return 0;
}

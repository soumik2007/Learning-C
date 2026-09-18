#include <stdio.h>

int main()
{
    int sub_1;
    int sub_2;
    int sub_3;
    printf("Marks of subject 1 out of 100: ");
    scanf("%d", &sub_1);
    printf("Marks of subject 2 out of 100: ");
    scanf("%d", &sub_2);
    printf("Marks of subject 3 out of 100: ");
    scanf("%d", &sub_3);

    int total = sub_1 + sub_2 + sub_3;
    int percentage_total = (total / 3);
    if (percentage_total >= 40 && sub_1 >= 33 && sub_2 >= 33 && sub_3 >= 33)
    {
        printf("You are passed");
    }
    else
    {
        printf("You are Not passed");
    }
    return 0;
}
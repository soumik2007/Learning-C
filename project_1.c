#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // random number genration area:
    srand(time(NULL));
    int random = (rand() % 100) + 1;
    int random_num = random;
    // printf("%d\n", random_num);
    // input area:
    int input_num;
    int counter = 0;

    // operation area:
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &input_num);

        if (input_num < random_num)
        {
            printf("Your number is small\n");
            printf("Enter a number: ");
            scanf("%d\n", &input_num);
            counter++;
        }
        else if (input_num > random_num)
        {
            printf("Your number is big\n");
            printf("Enter a number: ");
            scanf("%d\n", &input_num);
            counter++;
        }
        else if (input_num == random_num)
        {
            printf("Your number is correct\n");
        }
        printf("You took %d chances", counter);

    } while (input_num != random_num);

    return 0;
}
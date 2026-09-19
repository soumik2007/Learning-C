#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // random number genration area:
    srand(time(NULL));
    int random = (rand() % 100) + 1;
    int random_num = random;
    // input area:
    int input_num;
    int counter = 0;

    // operation area:
    do
    {
        printf("Enter a number: ");
        scanf("%d", &input_num);
        counter += 1;

        if (input_num < random_num)
        {
            printf("Your number is small\n");
        }
        else if (input_num > random_num)
        {
            printf("Your number is big\n");
        }
        else if (input_num == random_num)
        {
            printf("Your number is correct\n");
        }
    } while (input_num != random_num);
    printf("You took %d chances", counter);

    return 0;
}
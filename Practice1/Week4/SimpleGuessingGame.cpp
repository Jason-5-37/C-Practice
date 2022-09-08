#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));

    int num = (rand() % 10);
    int Ans;

    printf("I am thinking a number between 1 and 10...%d\n", num);
    printf("Your have three chances to guess the number...\n");

    printf("What is your fist guess? ");
    scanf("%d", &Ans);
    if (Ans == num)
    {
        printf("Well done, %d was my nymber! You got it right in the first time.", num);
    }
    else if (Ans != num)
    {
        printf("Incorrect!\nWhat is your second guess?");
        scanf("%d", &Ans);
        if (Ans == num)
        {
            printf("Well done, %d was my nymber! You got it right in the second time.", num);
        }
        else if (Ans != num)
        {
            printf("Incorrect!\nWhat is your third guess?");
            scanf("%d", &Ans);
            if (Ans == num)
            {
                printf("Well done, %d was my nymber! You got it right in the last time.", num);
            }
            else
            {
                printf("Loser...");
            }
        }
        else
        {
            printf("Indival input");
        }
    }
    else
    {
        printf("Indival input");
    }

    return 0;
}
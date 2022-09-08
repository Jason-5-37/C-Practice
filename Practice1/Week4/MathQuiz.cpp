#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int Num1, Num2, result, Answer;

    srand(time(0));
    Num1 = (rand() % 100);
    Num2 = (rand() % 100);
    result = Num1 + Num2;

    printf("What is %d + %d ?", Num1, Num2);
    scanf("%d", &Answer);

    if (Answer == result)
    {
        printf("\nCorrect!");
    }
    else
    {
        printf("\nWrong! %d + %d is %d.", Num1, Num2, result);
    }

    return 0;
}
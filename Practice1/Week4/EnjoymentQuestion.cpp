#include <stdio.h>

int main(void)
{
    char Answer;

    printf("Are you enjoying the COMP500/ENSE501 labs (y/n)? ");
    scanf("%c", &Answer);

    if (Answer == 'y')
    {
        printf("\nGreat! Keep going this is only week 4 ! ");
    }
    else if (Answer == 'n')
    {
        printf("\nOh no! Don't worry only eight short weeks to go !");
    }
    else
    {
        printf("\nYour response makes no sense !");
    }

    return 0;
}
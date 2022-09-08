#include <stdio.h>

int main(void)
{
    int Ans1;
    char Ans2;

    printf("How many years' experience? ");
    scanf("%d", &Ans1);
    printf("Does the candiate konw C (y/n)?");
    scanf(" %c", &Ans2);

    if (Ans1 >= 3 || Ans2 == 'y')
    {
        printf("\n\nThis candidate must be interview.");
    }
    else
    {
        printf("\n\nDo not interview this candidate.");
    }

    return 0;
}
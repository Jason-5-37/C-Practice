#include <stdio.h>

int main(void)
{
    int hours;

    printf("How many hours did you spend studying for the test? ");
    scanf("%d", &hours);

    if (hours <= 39 && hours >= 26)
    {
        printf("\nGood, but was it engouth...");
    }
    else if (hours >= 0 && hours <= 25)
    {
        printf("\n%d hours is probably not enouht!", hours);
    }
    else if (hours >= 40)
    {
        printf("\nExcellent, you should be well prepared for the test!");
    }
    else
    {
        printf("\nInvalid, you cannot have studied a negative number of hours!");
    }

    return 0;
}
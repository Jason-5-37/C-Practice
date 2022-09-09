#include <stdio.h>

int main(void)
{
    int firstinput, secondinput, result;

    printf("First number? ");
    scanf("%d", &firstinput);
    printf("Second number? ");
    scanf("%d", &secondinput);

    printf("\nThe larger of %d and %d is %d.", firstinput, secondinput, result = firstinput > secondinput ? firstinput : secondinput);

    return 0;
}
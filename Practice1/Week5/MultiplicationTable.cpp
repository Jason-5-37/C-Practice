#include <stdio.h>

int main(void)
{
    int input;

    printf("Enter a whole number: ");
    scanf("%d", &input);

    printf("\nThe %d Times Table:", input);
    printf("---------------------");

    for (int i = 0; i <= 14; i++)
    {
        printf("\n%d x %d = %d", i, input, i * input);
    }
    return 0;
}
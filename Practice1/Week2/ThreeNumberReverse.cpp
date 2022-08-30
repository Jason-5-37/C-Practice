#include <stdio.h>

int main(void)
{
    int number1, number2, number3;

    printf("Please enter number 1: ");
    scanf("%d", &number1);
    printf("Please enter number 2: ");
    scanf("%d", &number2);
    printf("Please enter number 3: ");
    scanf("%d", &number3);

    printf("\nYour numbers in entry order:\n%d\n%d\n%d\n", number1, number2, number3);
    printf("Your numbers reversed:\n%d\n%d\n%d\n", number3, number2, number1);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int Num;
    printf("Please enter a whole number:");
    scanf("%d", &Num);
    printf("%d cubed is: %d", Num, Num * Num * Num);

    return 0;
}
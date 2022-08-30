#include <stdio.h>

int main(void)
{
    float Num1, Num2, Num3, Num4, Num5, Num6;

    printf("Number 1?");
    scanf("%f", &Num1);
    printf("Number 2?");
    scanf("%f", &Num2);
    printf("Number 3?");
    scanf("%f", &Num3);
    printf("Number 4?");
    scanf("%f", &Num4);
    printf("Number 5?");
    scanf("%f", &Num5);
    printf("Number 6?");
    scanf("%f", &Num6);

    printf("\nThe sum is: %.2f", Num1 + Num2 + Num3 + Num4 + Num5 + Num6);
    printf("\nThe Average is: %.2f", (Num1 + Num2 + Num3 + Num4 + Num5 + Num6) / 6);

    return 0;
}
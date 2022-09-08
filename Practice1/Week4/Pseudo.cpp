#include <stdio.h>

int main(void)
{
    float x, y;

    printf("Enter the x value: ");
    scanf("%f", &x);
    printf("\nEnter the y value: ");
    scanf("%f", &y);

    float a = x * y;
    float b = x + y;
    float result = b * b + a * (b - x) * (a + y);

    printf("\nComputed: %f", result);

    return 0;
}
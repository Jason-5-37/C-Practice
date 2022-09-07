#include <stdio.h>
#include <math.h>

int main(void)
{
    float Num;

    printf("Please enter a base: ");
    scanf("%f", &Num);

    printf("%0.0f ^ 0 is: %.0f\n", Num, powf(Num, 0));
    printf("%0.0f ^ 1 is: %.0f\n", Num, powf(Num, 1));
    printf("%.0f ^ 2 is: %.0f\n", Num, powf(Num, 2));
    printf("%.0f ^ 3 is: %.0f\n", Num, powf(Num, 3));
    printf("%.0f ^ 4 is: %.0f\n", Num, powf(Num, 4));
    printf("%.0f ^ 5 is: %.0f\n", Num, powf(Num, 5));
    printf("%.0f ^ 6 is: %.0f\n", Num, powf(Num, 6));
    printf("%.0f ^ 7 is: %.0f\n", Num, powf(Num, 7));
    printf("%.0f ^ 8 is: %.0f\n", Num, powf(Num, 8));

    return 0;
}
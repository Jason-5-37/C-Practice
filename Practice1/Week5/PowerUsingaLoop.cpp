#include <stdio.h>
#include <math.h>

int main(void)
{
    float base, power;

    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the power: ");
    scanf("%f", &power);
    printf("\n%.0f ^ %.0f is the same as...\n\n", base, power);

    for (float i = 1.0f; i < power; i++)
    {
        printf("%.0f * ", base);
    }

    printf("%.0f which is %.0f", base, powf(base, power));

    return 0;
}
#include <stdio.h>

int main(void)
{
    float S1, S2, S3, S4, S5;

    printf("Please enter the Score: ");
    scanf("%f", &S1);
    printf("Please enter the Score: ");
    scanf("%f", &S2);
    printf("Please enter the Score: ");
    scanf("%f", &S3);
    printf("Please enter the Score: ");
    scanf("%f", &S4);
    printf("Please enter the Score: ");
    scanf("%f", &S5);

    printf("Calculating......\n");

    S1 *= 0.15f;
    S2 *= 0.10f;
    S3 *= 0.10f;
    S4 *= 0.15f;
    S5 *= 0.50f;

    printf("So your Score are : %f\n %f\n %f\n %f\n %f\n", S1, S2, S3, S4, S5);
    printf("Total is: %f", S1 + S2 + S3 + S4 + S5);

    return 0;
}
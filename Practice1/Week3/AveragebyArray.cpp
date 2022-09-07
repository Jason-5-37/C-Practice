#include <stdio.h>

int main(void)
{
    float input[4];

    printf("Please enter five real numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &input[i]);
        printf("Please enter the next\n");
    }
    for (int q = 0; q < 5; q++)
    {
        printf("Your input are: %f \n", input[q]);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;

    printf("Enter the first num>\n");
    scanf("%f", &a);
    printf("Enter the second num>\n");
    scanf("%f", &b);
    printf("Enter the third num>\n");
    scanf("%f", &c);

    float d = a + b + c;
    float e = d / 3.0f;
    printf("Sum: %f>\n", d);
    printf("Average: %f>\n", e);

    return 0;
}
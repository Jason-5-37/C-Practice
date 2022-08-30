#include <stdio.h>

int main(void)
{
    float Radius;
    float PI = 3.14159f;

    printf("Circle Calculator:\n");
    printf("******************\n\n");

    printf("Please enter the radius of a circle: ");
    scanf("%f", &Radius);
    printf("Calculating....\n\n");

    printf("A circle with radius %f has: \n", Radius);
    printf("An area of %f\n", Radius * Radius * PI);
    printf("A circumference of : %f", Radius * 2 * PI);

    return 0;
}
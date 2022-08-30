#include <stdio.h>

int main(void)
{
    float Fahrenheit, Celsius;

    printf("Please entere a temperature in Fahrenheit:");
    scanf("%f", &Fahrenheit);

    printf("Converting..........\n\n");
    printf("%f degrees Fahrenheit is the same as \n", Fahrenheit);
    Celsius = (Fahrenheit - 32) * (5.0f / 9.0f);
    printf("%f degrees Celsius.", Celsius);

    return 0;
}
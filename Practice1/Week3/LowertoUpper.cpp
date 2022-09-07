#include <stdio.h>

int main(void)
{
    char input;

    printf("Lowercase to Uppercase Converter: \n");
    printf("Please enter a lowercase letter: ");
    scanf("%c", &input);

    printf("The uppercase version is %c", input - 32);

    return 0;
}
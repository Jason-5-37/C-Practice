#include <stdio.h>

int main(void)
{
    char input;
    printf("Please input a letter, digit or symbol: ");
    scanf("%c", &input);

    printf("The ASCII value for %c in base-10 is %d \n", input, input);
    printf("The ASCII value for %c is base-16 is 0x%X \n", input, input);

    return 0;
}
#include <stdio.h>

int main(void)
{
    char input;

    printf("Please enter a letter: ");
    scanf("%c", &input);
    printf("The ASCII value for %c in base-10 is : %d \n", input, input);
    printf("The ASCII value for %c in base-16 is : 0x%x \n", input, input);

    return 0;
}
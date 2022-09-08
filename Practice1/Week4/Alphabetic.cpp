#include <stdio.h>

int main(void)
{
    char input;

    printf("Input a character: ");
    scanf("%c", &input);

    if (input >= 65 && input <= 90 || input >= 97 && input <= 122)
    {
        printf("%c is an alphabetic.", input);
    }
    else
    {
        printf("%c is not an alphabetic.", input);
    }

    return 0;
}
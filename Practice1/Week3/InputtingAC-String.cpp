#include <stdio.h>

int main(void)
{
    char input[9];

    printf("What is your favourite colour? ");
    scanf("%s", &input);
    printf("Your favourite color is %s", input);

    return 0;
}
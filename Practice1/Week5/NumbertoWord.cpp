#include <stdio.h>

int main(void)
{
    int input;

    printf("Input a number between 0 and 9: ");
    scanf("%d", &input);
    printf("\n");

    switch (input)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;

    default:
        break;
    }

    return 0;
}
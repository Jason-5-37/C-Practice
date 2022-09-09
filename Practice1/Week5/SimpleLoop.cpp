#include <stdio.h>

int main(void)
{
    int input;

    printf("n? ");
    scanf("%d", &input);
    printf("\n");

    for (int i = 1; i <= input; i++)
    {
        printf("[%d] ", i);
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    char input[50];
    int num = -1;
    input[50] = 'k';

    printf("Enter a word: ");
    scanf("%s", &input);

    for (int i = 0; i < 50; i++)
    {
        if (input[i] <= 90 && input[i] >= 65)
        {
            num++;
        }
        else if (input[i] <= 122 && input[i] >= 97)
        {
            num++;
        }
    }

    printf("\nThe word is %d characters long.", num);

    return 0;
}
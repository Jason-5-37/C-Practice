#include <stdio.h>

int main(void)
{
    int Length;

    printf("What is the lenbgth of one side? ");
    scanf("%d", &Length);
    printf("The square's perimerter is: %d\n", Length * 4);
    printf("The square's area is: %d", Length * Length);

    return 0;
}
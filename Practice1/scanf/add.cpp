#include <stdio.h>

int main(void)
{
    int result1, result2, result3;

    printf("Hello welcome to the test calculator ! \n");
    printf("Please enter your first result: ");
    scanf("%d", &result1);
    printf("Please enter your second result: ");
    scanf("%d", &result2);
    printf("Please enter your third result: ");
    scanf("%d", &result3);
    printf("Sum of the result %d", result1 + result2 + result3);
    return 0;
}
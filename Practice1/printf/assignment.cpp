#include <stdio.h>

int main(void)
{
    int result;
    float result2;

    result = 5 + 7;
    printf("%d \n", result);
    result2 = 0.15611651651;
    printf("%.2f \n ", result2);
    result = 5 * 7;
    printf("%+5d ", result);

    return 0;
}
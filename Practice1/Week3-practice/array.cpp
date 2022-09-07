#include <stdio.h>

int main(void)
{
    int index = 0;
    int Num[3] = {1, 5, 6};

    printf("The %d is : %d\n", index, Num[index++]);
    printf("The %d is : %d\n", index, Num[index++]);
    printf("The %d is : %d\n", index, Num[index++]);

    return 0;
}
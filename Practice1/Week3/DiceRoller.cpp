#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int dice = (rand() % 19) + 1;
    int dice2 = (rand() % 19) + 1;

    printf("The first die rolls the value: %d\n", dice);
    printf("Then....\n");
    printf("The second die rolls the value : %d", dice2);

    return 0;
}
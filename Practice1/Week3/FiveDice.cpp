#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int dice1 = (rand() % 6 + 1);
    int dice2 = (rand() % 6 + 1);
    int dice3 = (rand() % 6 + 1);
    int dice4 = (rand() % 6 + 1);
    int dice5 = (rand() % 6 + 1);

    printf("Dice1: %d\n", dice1);
    printf("Dice2: %d\n", dice2);
    printf("Dice3: %d\n", dice3);
    printf("Dice4: %d\n", dice4);
    printf("Dice5: %d\n", dice5);

    return 0;
}
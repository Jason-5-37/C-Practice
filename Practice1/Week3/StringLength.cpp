#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[19];

    printf("Please enter your name: ");
    scanf("%s", &name);

    int num = strlen(name);
    printf("%s contains %d characters.", name, num);

    return 0;
}
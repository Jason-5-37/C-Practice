#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int whole_number = 0;
    char text[79];

    printf(">\n");
    scanf("%79s", &text);

    whole_number = atoi(text);
    printf("C-String: %s\n", text);
    printf("int: %d\n", whole_number);

    return 0;
}
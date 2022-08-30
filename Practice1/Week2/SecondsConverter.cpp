#include <stdio.h>

int main(void)
{
    int Input, Hours, Minutes, Seconds;

    printf("Number of seconds? ");
    scanf("%d", &Input);
    Hours = Input / 3600;
    Minutes = (Input - 3600 * Hours) / 60;
    Seconds = Input - 3600 * Hours - Minutes * 60;

    printf("%d hour(s), %d minute(s), %d second(s).", Hours, Minutes, Seconds);

    return 0;
}
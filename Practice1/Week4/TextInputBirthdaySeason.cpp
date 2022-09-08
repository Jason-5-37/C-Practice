#include <stdio.h>
#include <string.h>

int main(void)
{
    char Answer[10];

    printf("What month were you born in? ");
    scanf(" %s", &Answer);

    if (strcmp(Answer, "September"))
    {
        printf("\n%s in New Zealand is Sprint.", Answer);
    }
    else if (strcmp(Answer, "October"))
    {
        printf("\n%s in New Zealand is Sprint.", Answer);
    }
    else if (strcmp(Answer, "November"))
    {
        printf("\n%s in New Zealand is Sprint.", Answer);
    }
    else if (strcmp(Answer, "December"))
    {
        printf("\n%s in New Zealand is Summer.", Answer);
    }
    else if (strcmp(Answer, "January"))
    {
        printf("\n%s in New Zealand is Summer.", Answer);
    }
    else if (strcmp(Answer, "February"))
    {
        printf("\n%s in New Zealand is Summer.", Answer);
    }
    else if (strcmp(Answer, "March"))
    {
        printf("\n%s in New Zealand is Autumn.", Answer);
    }
    else if (strcmp(Answer, "April"))
    {
        printf("\n%s in New Zealand is Autumn.", Answer);
    }
    else if (strcmp(Answer, "May"))
    {
        printf("\n%s in New Zealand is Autumn.", Answer);
    }
    else if (strcmp(Answer, "June"))
    {
        printf("\n%s in New Zealand is Winter.", Answer);
    }
    else if (strcmp(Answer, "July"))
    {
        printf("\n%s in New Zealand is Winter.", Answer);
    }
    else if (strcmp(Answer, "August"))
    {
        printf("\n%s in New Zealand is Winter.", Answer);
    }
    else
    {
        printf("\n\nWrong input");
    }

    return 0;
}
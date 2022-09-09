#include <stdio.h>

int main(void)
{
    int elements, array[500], k;

    printf("Enter the required number of elements (Max 500): ");
    scanf("%d", &elements);
    printf("\nNow enter the %d elements of the array...\n\n", elements);

    for (int i = 0; i < elements; i++)
    {
        printf("Set [%d] to:", i);
        scanf("%d", &array[i]);
    }

    printf("\n\nThe elements in the array are:\n\n{ ");

    for (int k = 0; k < elements - 1; k++)
    {
        printf("%d, ", array[k]);
    }

    k = elements - 1;
    printf("%d }", array[k]);

    return 0;
}
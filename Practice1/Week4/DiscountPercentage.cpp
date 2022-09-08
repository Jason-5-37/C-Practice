#include <stdio.h>

int main(void)
{
    float price, result, Discount;

    printf("Input the total purchase price: ");
    scanf("%f", &price);

    if (price < 2500.00)
    {
        result = price;
        Discount = 0 * price;
        printf("\nDiscount is: %.2f\n", Discount);
        printf("Payable Total is: %.2f", result);
    }
    else if (price < 6500 && price >= 2500)
    {
        Discount = 0.05 * price;
        result = price - Discount;
        printf("\nDiscount is: %.2f\n", Discount);
        printf("Payable Total is: %.2f", result);
    }
    else if (price <= 10000 && price >= 6500)
    {
        Discount = 0.10 * price;
        result = price - Discount;
        printf("\nDiscount is: %.2f\n", Discount);
        printf("Payable Total is: %.2f", result);
    }
    else if (price > 10000)
    {
        Discount = 0.125 * price;
        result = price - Discount;
        printf("\nDiscount is: %.2f\n", Discount);
        printf("Payable Total is: %.2f", result);
    }
    else
    {
        printf("\nWrong input!");
    }

    return 0;
}
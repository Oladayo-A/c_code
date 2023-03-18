#include <stdio.h>

int main()
{
    int day;
    int product_number;
    int quantity_sold;
    float retail_price;
    float total_value;
    total_value = 0.0;
    retail_price = 0.0;
    day = 1;
    product_number = 0;
    quantity_sold = 0;

    while (day <= 7)
    {
        printf("Day %d\n", day);
        printf("Enter product number (-1 to quit): ");
        scanf("%d", &product_number);
        if (product_number != -1)
        {
            switch (product_number)
            {
            case 1:
                retail_price = 2.98;
                break;
            case 2:
                retail_price = 4.50;
                break;
            case 3:
                retail_price = 9.98;
                break;
            case 4:
                retail_price = 4.49;
                break;
            case 5:
                retail_price = 6.87;
                break;
            default:
                printf("Enter a valid product (1-5)\n");
                continue;
                break;
            }
        }
        printf("Enter the quanity sold: ");
        scanf("%d", &quantity_sold);

        total_value += retail_price * quantity_sold;
        printf("Total sales: $%.2f\n", total_value);
        day++;
    }

    printf("Total sales for the week: $%.2f\n", total_value);

    return 0;
}
#include <stdio.h>

int main() {
    // Declare variables to store the input values
    int account_number, mortgage_term;
    float mortgage_amount, interest_rate;

    account_number = 0;
    mortgage_amount = 0.0;
    mortgage_term = 0;
    interest_rate = 0.0;


    while(account_number != -1){
    // Ask the user to enter the account number
        printf("Enter account number(-1 to end): ");
        scanf("%d", &account_number);

        if(account_number != -1){
                // Ask the user to enter the mortgage amount
            printf("Enter mortgage amount(in dollars): ");
            scanf("%f", &mortgage_amount);

                //Ask the user to enter the mortgage term
            printf("Enter mortgage term (in years): ");
            scanf("%d", &mortgage_term);

                //Ask the user to enter the interest rate
            printf("Enter interest rate (as a decimal): ");
            scanf("%f", &interest_rate);

            // Calculate the total interest payable
            float total_interest_payable = mortgage_amount * interest_rate * mortgage_term;

            // Add the interest payable to the mortgage amount to get the total amount payable
            float total_amount_payable = mortgage_amount + total_interest_payable;

            // Calculate the required monthly payment by dividing the total amount payable by the mortgage term
            float monthly_payment = (total_amount_payable / (mortgage_term * 12));

            // Display the required monthly payment rounded off to the nearest dollar
            printf("\nRequired monthly payment: $%.0f\n", monthly_payment);

        }
    }
        return 0;
}


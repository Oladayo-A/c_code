#include <stdio.h>

int main()
{
    // Declare variables to store input values
    int account_number;
    float credit_limit;
    float new_credit_limit;
    float balance;
    int count;

    account_number = 0;
    credit_limit = 0;
    new_credit_limit = 0;
    balance = 0;
    count = 0;

    while (account_number != -1 || count < 3)
    {
        // Ask the user to enter the account number
        printf("Enter account number(-1 to end): ");
        scanf("%d", &account_number);

        if (account_number != -1)
        {
            // Ask the user for credit_limit
            printf("Enter credit limit: ");
            scanf("%f", &credit_limit);

            // Ask the user for balance
            printf("Enter your balance: ");
            scanf("%f", &balance);

            // Calculate the new credit limit
            new_credit_limit = credit_limit / 2;

            printf("The new credit limit is $%.2f\n", new_credit_limit);

            if (balance > new_credit_limit)
            {
                printf("Customer's Balance has exceeded credit limit\n");
            }
            count++;
        }
        if (count > 2)
        {
            break;
        }
    }
    return 0;
}
#include <stdio.h>

int main(){
    // Declare variables to store input values
    int days;
    float interest,principal,rate;

    interest = 0.0;
    principal = 0.0;
    rate = 0.0;
    days = 0;

    while(principal != -1){
        // Ask the user for loan principal
        printf("Enter loan principal(-1 to end): ");
        scanf("%f", &principal);

        if(principal != -1){
            // Ask the user to enter the interest rate
            printf("Enter interest rate: ");
            scanf("%f", &rate);

            //Ask the user to enter the duration of the loan in days
            printf("Enter term of the loan in days: ");
            scanf("%d", &days);

            //Calculate the interest on the loan
            interest = principal * rate * (float)(days/365);

            // Display the interest on the loan
            printf("\nThe interest charge is: $%.2f\n", interest);
        }


    }
        return 0;
}
#include <stdio.h>

int main(){
    // Declare variables to store input values
    float hours_worked;
    float hourly_rate;
    float gross_pay;

    hours_worked = 0.0;
    hourly_rate = 0.0;
    gross_pay = 0.0;

    while(hours_worked != -1){
        // Ask the user to enter hours worked
        printf("Enter hours worked(-1 to end): ");
        scanf("%f", &hours_worked);

        if(hours_worked != -1){
            // Ask the user to enter the hourly rate
            printf("Enter hourly rate of the employee($00.00): ");
            scanf("%f", &hourly_rate);

            //Calculate the gross pay
            if(hours_worked <= 40){
                gross_pay = hours_worked * hourly_rate;
            }
            else{
                gross_pay = (40 * hourly_rate) + ((hours_worked - 40) * (hourly_rate * 1.5));
            }
            // Display the gross pay
             printf("\nGross pay is: $%.2f\n", gross_pay);
        }
    }
    return 0;
}
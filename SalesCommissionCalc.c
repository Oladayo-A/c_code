#include <stdio.h>

int main(){
    // Declare variables to store input values
    float Sales,Ninepercent,Salary;

    Sales = 0.0;
    Ninepercent = 0.0;
    Salary = 0.0;


    while(Sales != -1){
        // Ask the user for sales in dollars
        printf("Enter sales in dollars(-1 to end): ");
        scanf("%f", &Sales);

        if(Sales != -1){

            // Calculate the salary of the worker based on his sales
            Ninepercent = (0.09) * Sales;
            Salary = Ninepercent + 200.0;

            // Display the salary of the worker
            printf("\nSalary is: $%.0f\n", Salary);
        }

        
    }
        return 0;
}

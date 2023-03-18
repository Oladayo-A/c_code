#include <stdio.h>

int main()
{
    // Declare variables to store input values
    int count;
    int number;

    count = 0;
    number = 0;

    for (; count < 5; count++)
    {
        printf("Enter a number from 1 to 30: ");
        scanf("%d", &number);

        if (number > 30 || number < 1)
        {
            count--;
            continue;
        }

        for (int i = 0; i < number; i++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}
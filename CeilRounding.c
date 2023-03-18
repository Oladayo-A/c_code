#include <math.h>
#include <stdio.h>

/**
 * (Rounding Numbers)
 * An application of function ceil is rounding a value to the nearest integer.
 * The statement y = ceil(x + .5);
 * rounds the number x to the nearest integer and assigns the result to y.
 * Write a program that reads several numbers and uses the preceding statement
 * to round each of these numbers to the nearest integer. For each number
 * processed, print both the original number and the rounded number
 *
 */

int main()
{

    int count;
    count = 5;
    float input;
    input = 0;
    float output;
    output = 0;

    while (count)
    {
        printf("Enter a number to be rounded to the nearest integer(-1 to Exit): ");
        scanf("%f", &input);
        if (input == -1.0)
        {
            break;
        }
        output = ceil(input + .5f);
        printf("%f %f \n", input, output);
        --count;
    }

    return 0;
}
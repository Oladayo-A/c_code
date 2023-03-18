#include <math.h>
#include <stdio.h>

/*
 *
 * (Rounding Numbers)
 * Function floor may be used to round a number to a specific decimal place.
 * The statement y = floor(x * 10 + .5) / 10;
 * rounds x to the tenths position (the first position to the right of the
 * decimal point). The statement y = floor(x * 100 + .5) / 100; rounds x to the
 * hundredths position (the second position to the right of the decimal point).
 * Write a program that defines four functions to round a number x in various
 * ways
 * a) roundToInteger(number)
 * b) roundToTenths(number)
 * c) roundToHundreths(number)
 * d) roundToThousandths(number)
 * For each value read, your program should print the original value,
 * the number rounded to the nearest integer,
 * the number rounded to the nearest tenth,
 * the number rounded to the nearest hundredth,
 * and the number rounded to the nearest thousandth
 *
 * */

float roundToInteger(float);
float roundToTenths(float);
float roundToHundreths(float);
float roundToThousandths(float);

int main()
{

    float input;
    int count = 5;
    input = 0.0f;

    while (count)
    {
        printf("Enter a number to be rounded to the nearest integer, tenths, "
               "hundreths, thousandths: (- 1 to Exit) ");
        scanf("%f", &input);
        if (input == -1.0f)
        {
            break;
        }
        printf("original: %f \ninteger: %f \ntenths: %f \nhundredths: %f "
               "\nthousandths: %f \n",
               input, roundToInteger(input), roundToTenths(input),
               roundToHundreths(input), roundToThousandths(input));
        --count;
    }

    return 0;
}

float roundToInteger(float number)
{
    float result;
    result = 0.0f;
    result = floorf(number + 0.5);
    return result;
}

float roundToTenths(float number)
{
    float result;
    result = 0.0f;
    result = floorf(number * 10 + 0.5) / 10;
    return result;
}
float roundToHundreths(float number)
{
    float result;
    result = 0.0f;
    result = floorf(number * 100 + 0.5) / 100;
    return result;
}
float roundToThousandths(float number)
{
    float result;
    result = 0.0f;
    result = floorf(number * 1000 + 0.5) / 1000;
    return result;
}
#include <math.h>
#include <stdio.h>

/*
 *
 * (Hypotenuse Calculations)
 * Define a function called hypotenuse that calculates the length
 * of the hypotenuse of a right triangle when the other two sides are given.
 * The function should take two arguments of type double and return the
 * hypotenuse as a double. Test your program with the side values specified in
 * Fig 5.22
 *
 * Triangle  Side 1  Side 2
 *    1       3.0     4.0
 *    2       5.0     12.0
 *    3       8.0     15.0
 *
 * */

double hypotenuse(double, double);

int main()
{

    printf("triangle 1: %lf\n", hypotenuse(3.0, 4.0));
    printf("triangle 2: %lf\n", hypotenuse(5.0, 12.0));
    printf("triangle 3: %lf\n", hypotenuse(8.0, 15.0));

    return 0;
}

double hypotenuse(double side1, double side2)
{

    double sum_of_sides_square;
    sum_of_sides_square = 0.0;
    sum_of_sides_square = (side1 * side1) + (side2 * side2);
    
    return sqrt(sum_of_sides_square);
}
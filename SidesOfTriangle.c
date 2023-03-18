#include <math.h>
#include <stdio.h>

/*
 *
 * (Sides of a Triangle)
 * Write a function that reads three nonzero double values as the sides of a
 * triangle, and calculates and returns the area of the triangle as a double
 * variable. It should also check whether the numbers represent the sides of a
 * triangle before calculating the area. Use this function in a program that
 * inputs a series of sets of numbers
 *
 * */

double area_of_triangle(double, double, double);

int main()
{

    double side1;
    double side2;
    double side3;
    double area;

    side1 = 1.0;
    side2 = 2.0;
    side3 = 3.0;
    area = 0.0;

    printf("Enter triangle side1: ");
    scanf("%lf", &side1);
    printf("Enter triangle side2: ");
    scanf("%lf", &side2);
    printf("Enter triangle side3: ");
    scanf("%lf", &side3);

    area = area_of_triangle(side1, side2, side3);

    printf("Area of the triangle: %lf", area);

    return 0;
}

// if the sides do not represent a triangle return -1.0
//
double area_of_triangle(double side1, double side2, double side3)
{

    if (side1 + side2 < side3)
        return -1.0;

    double s;
    s = (side1 + side2 + side3) / 2;

    double area;
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    return area;
}
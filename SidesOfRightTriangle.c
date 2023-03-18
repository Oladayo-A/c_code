#include <math.h>
#include <stdio.h>

/**
 * (Sides of a Right Triangle)
 * Write a function that reads three nonzero integers and determines whether
 * they are the sides of a right-angled triangle. The function should take three
 * integer arguments and return 1 (true) if the arguments comprise a
 * right-angled triangle, and 0 (false) otherwise. Use this function in a
 * program that inputs a series of sets of integers
 *
 * */

int are_sides_of_a_right_triangle(int, int, int);
int square(int);

int main()
{

    int count;
    int a;
    int b;
    int c;
    a = 0;
    b = 0;
    c = 0;
    count = 8;

    while (count)
    {

        printf("Enter the three integers as the sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);

        if (are_sides_of_a_right_triangle(a, b, c))
        {
            printf("Are sides of a right triangle\n");
        }
        else
        {
            printf("Are not sides of a right triangle\n");
        }

        --count;
    }
    return 0;
}

int square(int x) { return x * x; }

int are_sides_of_a_right_triangle(int side1, int side2, int side3)
{
    return (square(side1) + square(side2) == square(side3)) ? 1 : 0;
}
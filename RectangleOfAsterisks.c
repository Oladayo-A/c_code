#include <stdio.h>

/**
 * (Rectangle of Asterisks)
 * Write a function that displays a solid rectangle of asterisks whose
 * sides are specified in the integer parameters side1 and side2.
 * For example, if the sides are 4 and 5,the function displays the following
 * ***** x4
 */

void draw_rectangle(int, int);

int main()
{

    int count;
    int side1;
    int side2;
    side1 = 0;
    side2 = 0;
    count = 5;

    while (count)
    {

        printf("Enter the sides of the rectangle: ");
        scanf("%d %d", &side1, &side2);
        draw_rectangle(side1, side2);
        --count;
    }

    return 0;
}

void draw_rectangle(int side1, int side2)
{

    for (int i = 0; i < side1; i++)
    {
        for (int j = 0; j < side2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
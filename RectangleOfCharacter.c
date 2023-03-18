#include <stdio.h>

/**
 */

void draw_rectangle(int, int, char);

int main()
{

    int count;
    int side1;
    int side2;
    char character;
    side1 = 0;
    side2 = 0;
    count = 5;

    while (count)
    {

        printf("Enter the sides and the character of the rectangle: ");
        scanf("%d %d %c", &side1, &side2, &character);
        draw_rectangle(side1, side2, character);
        --count;
    }

    return 0;
}

void draw_rectangle(int side1, int side2, char ch)
{

    for (int i = 0; i < side1; i++)
    {
        for (int j = 0; j < side2; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
#include <stdio.h>

/*
 * (Even or Odd)
 * Write a program that inputs a series of integers and passes them one at a
 * time to function isEven, which uses the remainder operator to determine
 * whether an integer is even. The function should take an integer argument and
 * return 1 if the integer is even and 0 otherwise.
 *
 * */

int isEven(int);

int main()
{
    int count;
    int number;
    number = 0;
    count = 5;

    while (count)
    {

        if (number == -1)
            break;

        printf("Enter a number (-1 to quit): ");
        scanf("%d", &number);

        if (isEven(number))
        {
            printf("%d is even\n", number);
        }
        else
        {

            printf("%d is odd\n", number);
        }

        --count;
    }
    return 0;
}

int isEven(int x) { return (x % 2 == 0) ? 1 : 0; }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *
 For each of the following sets of integers, write a single statement that will
print a number at random from the set. a) 3, 6, 9, 12, 15, 18, 21, 24, 27, 30.
b) 3, 5, 7, 9, 11, 13, 15, 17, 19.
c) 3, 8, 13, 18, 23, 28, 33
 * */

int main()
{

    srand(time(NULL));
    int a = ((rand() % 10) * 3) + 3;
    printf("a) 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 = %d\n", a);
    int b = ((rand() % 9) * 2) + 3;
    printf("b) 3, 5, 7, 9, 11, 13, 15, 17, 19 = %d\n", b);
    int c = ((rand() % 7) * 5) + 3;
    printf("c) 3, 8, 13, 18, 23, 28, 33 = %d\n", c);
    return 0;
}
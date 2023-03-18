#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *Write statements that assign random integers to the variable n in the
following ranges: a) 1 ≤ n ≤ 6 b) 100 ≤ n ≤ 1000 c) 0 ≤ n ≤ 19 d) 1000 ≤ n ≤
2222 e) –1 ≤ n ≤ 1 f) –3 ≤ n ≤ 11
 *
 * */

int main()
{
    srand(time(NULL));

    printf("a) 1 <= n <= 6 : %d \n", (rand() % 6) + 1);
    printf("b) 100 <= n <= 1000 : %d\n", (rand() % 901) + 100);
    printf("c) 0 <= n <= 19 : %d\n", (rand() % 20));
    printf("d) 1000 <= n <= 2222 : %d\n", (rand() % 1223) + 1000);
    printf("e) -1 <= n <= 1 : %d\n", (rand() % 3) - 1);
    printf("f) -3 <= n <= 11 : %d\n", (rand() % 15) - 3);

    return 0;
}
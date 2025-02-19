#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing the number stored in variable n
 * need to know if variable is positive or negative
 * Return: always 0 (success)
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0) {
        printf("%d is positive\n", n);
    }
    else if (n == 0) {
        printf("%d is 0\n", n);
    }
    else {  // No condition needed here
        printf("%d is negative\n", n);
    }

    return (0);
}

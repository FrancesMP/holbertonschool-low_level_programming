#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing the number stored in variable n
 * need to know if variable is positive or negative*
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) { 
    printf("n is positive\n");
} 
else if (n == 0) { 
    printf("n is 0\n");
} 
else { //no condition needed here:
    printf("n is negative\n");
}
	return (0);
}

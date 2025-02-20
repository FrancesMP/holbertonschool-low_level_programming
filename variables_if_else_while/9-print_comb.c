#include <stdio.h>

/**
 * main - Prints single-digit numbers with commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');

	if (n != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n'); /* New line at the end */

	return (0);
}

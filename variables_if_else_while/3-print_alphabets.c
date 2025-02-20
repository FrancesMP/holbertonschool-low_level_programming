#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	int u;

	for (l = 'a'; l <= 'z'; l++)
	putchar (l);


	for (u = 'A'; u <= 'Z'; u++)
	putchar (u);

	/* Print a new line */
	putchar('\n');

return (0);
}


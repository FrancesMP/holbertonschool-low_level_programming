#include <stdio.h>

/**
 * main - Prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a'; l--)
	putchar(l);

	putchar('\n');

	return (0);
}


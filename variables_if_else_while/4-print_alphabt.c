#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, excluding 'q' and 'e',
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)

	{
	if (l != 'q' && l != 'e')
	putchar(l);
	}

	 putchar('\n');

return (0);
}

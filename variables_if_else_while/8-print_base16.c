#include <stdio.h>

/**
 * main - Prints all hexadecimal numbers (base 16)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (n = 'a'; n <= 'f'; n++)
	putchar(n);

	putchar('\n');

return (0);
}

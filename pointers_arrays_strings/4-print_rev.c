#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')

	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_diagonal - Draws a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 *
 * Return: Nothing (void function)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}

#include "main.h"

/**
 *print_alphabet_x10 - Prints lowercase alphabet 10 times
 *followed by a new line each time.
 */
void print_alphabet_x10(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}

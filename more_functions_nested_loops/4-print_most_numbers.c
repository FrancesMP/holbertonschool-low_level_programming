#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 */

void print_most_numbers(void)

{
	int nmbr;

	for (nmbr = 48; nmbr < 58; nmbr++)/* Loop from '0' (48) to '9' (57)*/
	{
		if (nmbr != 50 && nmbr != 52) /* Skip '2' (50) and '4' (52)*/
		{
			_putchar(nmbr);
		}
	}
	_putchar('\n'); /* Print newline after numbers*/
}

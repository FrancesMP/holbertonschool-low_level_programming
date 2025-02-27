#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int row, num;

	for (row = 0; row < 10; row++)  /*Loop 10 times*/
	{
		for (num = 0; num < 15; num++) /*Loop from 0 to 14*/
		{
			if (num > 9)  /*If num is 10-14, print first digit*/
				_putchar((num / 10) + '0');

			_putchar((num % 10) + '0'); /* Print last digit*/
		}
		_putchar('\n');  /*Print newline after numbers*/
	}
}

#include "main.h"

/**
 *_abs - Computer the absolute value of an intenger.
 *@c: The number to be computes.
 *Return: Absolute value of the number or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

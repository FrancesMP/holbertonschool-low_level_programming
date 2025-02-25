#include "main.h"
/**
 * _isupper - Write a code that will check for uppercase characters
 *@c: The character to check
 *Return: 1 if c is uppercase and, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)

		return (1);

	else

		return (0);

}

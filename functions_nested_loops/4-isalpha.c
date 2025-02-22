#include "main.h"

/**
*int_isalpha - checks id a character us a lower or upper case
*@c:The character to check
*
*Return: 1 if c is a letter, 0 otherwise
*/

int _isalpha(int c)

{
	if (c >= 97 && c <= 122)
		return (1);

	if (c >= 65 && c <= 90)
		return (1);

else

	return (0);
}

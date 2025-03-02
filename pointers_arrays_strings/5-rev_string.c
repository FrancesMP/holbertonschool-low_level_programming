#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 * Return: empty
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	while (s[len] != '\0')
	len++;

	for (i = 0; i < len / 2; i++)
	{
	temp = s[i];/*Store left-side character in temp*/
	s[i] = s[len - 1 - i];/*Move right-side character to left*/
	s[len - 1 - i] = temp; /*Move temp (original left) to the right*/
	}
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strchr - Locate a character in a string
 * @s: The string to search
 * @c: The character to find
 * Return: Pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (c == '\0')
	return (s);
	return (NULL);
}

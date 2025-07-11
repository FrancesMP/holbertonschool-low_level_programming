#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings using at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to new allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, total = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	total = len1 + n;
	s = malloc(sizeof(char) * (total + 1));
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';

	return (s);
}

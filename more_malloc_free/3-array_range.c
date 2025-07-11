#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: starting value
 * @max: ending value
 *
 * Return: pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}


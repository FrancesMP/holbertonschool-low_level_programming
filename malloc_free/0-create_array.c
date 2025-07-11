#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes
 *it with a specific char
 * @size: The size of the array to create
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails or if size is 0
 */


char *create_array(unsigned int size, char c)

{

char *arr;
unsigned int i = 0;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

while (i < size)
{
arr[i] = c;
i++;

}

return (arr);

}

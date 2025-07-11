#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to the new string, or NULL if str is NULL or if memory fails
 */

char *_strdup(char *str)

{

char *copy;
unsigned int i = 0;
unsigned int length = 0;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

copy = malloc(sizeof(char) * (length + 1));
if (copy == NULL)
return (NULL);


while (i < length)
{
copy[i] = str[i];
i++;
}

copy[i] = '\0'; /* Null-terminate the new string */

return (copy);

}

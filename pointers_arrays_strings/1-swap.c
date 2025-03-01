#include "main.h"
/**
 *swap_int - Funtion that allows to swap intengers
 *@a: pointer that will be swapped
 *@b: pointer that will be swapped
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{
	int c = *a;
	*a = *b;
	*b = c;
}

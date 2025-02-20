#include <stdio.h>

/**
*main - printing the alphabet in lowercas, followed by  a new line
*Can only use putchar-twice*
*decided to create a loop with for*
*for was chosen because the number of loops are known*
*Return: always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)

{
	putchar(n);
}
{
	putchar('\n');
	return (0);
}
}

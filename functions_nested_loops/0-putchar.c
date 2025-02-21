#include "main.h"
/**
 *main - printing _putchar
 *
 *Return: 0 (sucess)
 */
int main(void)
{

	char n[] = "_putchar";
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}

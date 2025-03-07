#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector (unused).
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}


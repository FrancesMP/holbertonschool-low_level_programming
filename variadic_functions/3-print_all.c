#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on format specifiers.
 * @format: A string containing the format specifiers.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%s%c", sep, va_arg(args, int));
	break;
	case 'i':
	printf("%s%d", sep, va_arg(args, int));
	break;
	case 'f':
	printf("%s%f", sep, va_arg(args, double));
	break;
	case 's':
	str = va_arg(args, char *);
	if (!str)
	str = "(nil)";
	printf("%s%s", sep, str);
	break;
	default:
	i++;
	continue;
	}

	sep = ", ";
	i++;
	}

	printf("\n");
	va_end(args);
}

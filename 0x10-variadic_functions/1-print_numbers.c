#include "variadic_functions.c"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: string to separate numbers
 * @n: nb of args
 * Return: None
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf('\n');
	va_end(ap);
}

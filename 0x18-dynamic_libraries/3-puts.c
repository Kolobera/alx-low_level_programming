#include "main.h"

/**
 * _puts - print a string
 * @str: string to print
 * Return: None
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

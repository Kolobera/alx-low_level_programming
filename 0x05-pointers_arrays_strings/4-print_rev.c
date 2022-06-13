#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * Return: None
 */

void print_rev(char *s)
{
	int c;

	for (c = _strlen(s) - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

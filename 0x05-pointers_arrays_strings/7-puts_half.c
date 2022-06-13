#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 * Return: None
 */
void puts_half(char *str)
{
	int c, i;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	if (c % 2 == 0)
	{
		for (i = c / 2; i <= c - 1; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (c - 1) / 2 + 1; i <= c - 1; i++)
			_putchar(str[i]);
	}
}

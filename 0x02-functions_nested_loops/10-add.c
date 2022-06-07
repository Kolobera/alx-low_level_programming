#include stdio.h
#include "main.h"

/**
 * add - add
 *
 * @n: int
 *
 * @c: int
 *
 * Return: added
 */

int add(int n, int c)
{
	if (n + c < 0)
	{
		if (n + c > -10)
		{
			_putchar(45);
			_putchar(-(n + c) + 48);
		}
		else
		{
			_putchar(45);
			_putchar(((-(n + c) + (-(n + c) % 10)) / 10) + 48);
			_putchar((-(n + c)) % 10 + 48);
		}
	}
	else
	{
		if (n + c < 10)
			_putchar( (n + c) + 48);
		else
		{
			_putchar(((n + c + (n + c) % 10) / 10) + 48);
			_putchar((n + c) % 10 + 48);
		}
	}
	_putchar('\n');
	return (n + c);
}


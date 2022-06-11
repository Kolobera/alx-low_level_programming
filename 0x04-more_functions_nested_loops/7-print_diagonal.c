#include "main.h"

/**
 * print_diagonal - print diagonale
 * @n: int
 * Return: None
 */

void print_diagonal(int n)
{
	int ch;
	int i;

	for (ch = 1; ch <= n; ch++)
	{
		for (i = 1; i <= ch-1; i++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}


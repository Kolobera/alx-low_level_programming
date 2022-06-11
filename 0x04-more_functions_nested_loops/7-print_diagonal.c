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

	for (ch = 0; ch < n; ch++)
	{
		for (i = 0; i <= ch; i++)
		{
			if (i != ch)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

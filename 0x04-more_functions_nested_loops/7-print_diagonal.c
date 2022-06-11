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
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}

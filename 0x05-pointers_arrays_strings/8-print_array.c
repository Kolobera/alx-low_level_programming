#include "main.h"

/**
 * print_array - print array
 * @a: array
 * @n: lengtth of a
 * Return: None
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c <= n - 1; c++)
	{
		_putchar(a[c]);
		if (c != n)
		{
			_putchar(",");
			_putchar(" ");
		}
	}
	_putchar('\n');
}

#include <stdio.h>
#include "main.h"

/**
 * times_table - print tables
 *
 * Return: nonde
 */

void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a*b < 10)
				_putchar(a * b + 48);
			else
			{
				c = (a * b - (a * b) % 10 ) / 10;
				d = (a * b) % 10;
				_putchar(c + 48);
				_putchar(d + 48);
			}

			if (b != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
				_putchar(36);
		}
		_putchar('\n');
	}
}


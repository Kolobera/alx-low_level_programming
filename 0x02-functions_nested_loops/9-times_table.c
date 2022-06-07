#include <stdio.h>
#include "main.h"

/**
 * times_table - print tables
 *
 * Return: nonde
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(a*b);
			if (b != 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
				_putchar(36);
			_putchar('\n');
		}
	}
}


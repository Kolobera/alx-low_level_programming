#include "main.h"

/**
 * more_numbers - more numbers
 *
 * Return 0
 */

void more_numbers(void)
{
	int ch;
	int i;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 48; ch <= 61; ch++)
		{
			if (ch >= 48 && ch <= 57)
				c = ch;
			else
			{
				_putchar(49);
				c = ch - 10;
			}
			_putchar(ch);
		}
		putchar('\n');
	}
}





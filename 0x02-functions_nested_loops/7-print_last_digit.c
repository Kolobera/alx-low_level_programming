#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry
 *
 *@n: Number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int la;

	la = n % 10;
	if (la < 0)
	{
		_putchar(-la + 48);
		return (-la);
	}
	else
	{
		_putchar(la + 48);
		return (la);
	}
}

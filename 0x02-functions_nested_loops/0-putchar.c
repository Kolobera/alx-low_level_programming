#include <stdio.h>
#include "main.h"

/**
 *main - Entry
 *
 *Return: Always 0
 */

int main(void)
{
	int i;
	char p[]="_putchar";

	for (i = 0; i <= 8; i++)
		_putchar(p[i]);
	_putchar('\n');
	return (0);
}

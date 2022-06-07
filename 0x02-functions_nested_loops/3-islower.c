#include <stdio.h>
#include "main.h"

/**
 *_islower - Tell if lowercase
 *
 *@c: c la fête
 *
 *Return: 0 or 1
 */

int _islower(int c)
{
	if (c  >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}

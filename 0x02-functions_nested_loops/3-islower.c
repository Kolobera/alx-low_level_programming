#include <stdio.h>
#include "main.h"

/**
 *_is_lower - Tell if lowercase
 *
 *Return: 0 or 1
 */

int _is_lower(int c)
{
	if (97 <= c && c <=112)
		return (1);
	else 
		return (0);
	_putchar('\n');
}

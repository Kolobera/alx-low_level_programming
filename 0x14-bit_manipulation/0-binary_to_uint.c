#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary numb
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = i * 2 + *b - '0';
		++b;
	}
	return (i);
}

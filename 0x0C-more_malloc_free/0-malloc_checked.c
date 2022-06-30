#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alloc memory
 * @b : int
 * Return: None
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *n;


	n = malloc(b);
	if (n == NULL)
		exit(98);
	return (n);
}

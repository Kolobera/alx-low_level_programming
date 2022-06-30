#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * arry_range - create array
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *new;
	int i;

	if (min > max)
		return (NULL);
	new = malloc(sizeof(int) * (max - min + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < min + max + 1; i++)
		new[i] = min + i;
	return (new);
}

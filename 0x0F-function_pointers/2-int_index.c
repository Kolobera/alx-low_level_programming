#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: compare function
 * Return: index of searched integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (j);
		j++;
	}
	return (-1);
}

#include "function_pointers.h"

/**
 * array_iterator - execute action with every element of array
 * @array: array of int
 * @size: size of array
 * @action: action to execute
 *Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}

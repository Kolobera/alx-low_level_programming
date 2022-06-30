#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocate memory
 * @ptr: func
 * @old_size: int
 * @new_size: int
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	while (i < old_size)
	{
		*((char *)p + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (new);
}

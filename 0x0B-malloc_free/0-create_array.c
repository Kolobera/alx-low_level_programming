#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: initialisation of the array
 * Return: array, 0 or NULL
 */

char *create_array(unsigned int size, char c)
{
	char mot[];
	int i;

	mot = malloc(sizeof(int), size);
	if (size == 0 || mot == NULL)
		return(NULL);
	else
	{
		for (i = 0; i < size; i++)
			mot[i] = c;
		return(*mot);
	}
	free(mot);
}

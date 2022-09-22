#include "main.h"

/**
 * hash_table_create - create a new hash table
 * @size: size of table
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t) * size);
	if (!new)
		return (NULL);
	new->size = size;
	new->array = NULL;
	return (new);
}

#include "hash_tables.h"

/**
 * shash_table_create - create new shash tables
 * @size: size of table
 * Return: new table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t new;

	if (size == 0)
		return (NULL);
	
	new = calloc(1, sizeof(shash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = calloc(size, sizeof(shash_node_t *));
	if (!new->array)
	{
		free(table);
		return (NULL);
	}
	return (new);
}

/**
 * shash_table_set - set an element
 * @ht: hash table
 * @key: key of el
 * @value: value
 * Return: Success or Fail
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *keycopy, *valuecopy;
	shash_node_t *bucket, *new;

	if (!ht || !key || !*key || !value)
		return (0);
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[i];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = value;
			return (1);
		}
		bucket = bucket->next;
	}
	new = calloc(1, sizeof(shash_node_t));
	if (!new)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_list(ht, new_node);
	return (1);
}

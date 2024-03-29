#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @key: key of element
 * @ht: hash table
 * @value: value of el
 * Return: Success or fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	hash_node_t  *bucket, *new_node;

	if (!value || !*key || !key || !ht)
		return (0);

	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	bucket = ht->array[index];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = valuecopy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
	{
		free(valuecopy);
		return (0);
	}
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

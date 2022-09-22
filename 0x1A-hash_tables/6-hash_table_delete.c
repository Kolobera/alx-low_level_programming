#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *to_free;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			to_free = bucket;
			bucket = bucket->next;
			if (to_free->key)
				free(to_free->key);
			if (to_free->value)
				free(to_free->value);
			free(to_free);
		}
	}
	free(ht->array);
	free(ht);
}

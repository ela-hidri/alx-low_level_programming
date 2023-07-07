#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with a key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key = NULL || *key ='\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);

}

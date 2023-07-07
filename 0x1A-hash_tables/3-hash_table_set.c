#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *cp_value;
	unsigned long int i, index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(cp_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(cp_value);
		free(node);
		return (0);
	}
	node->value = cp_value;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

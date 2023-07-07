#include "hash_tables.h"
hash_node_t *create_item(const char *key, const char *value);
/**
 * hash_table_create - creates a hash table.
 * @size: size of hash table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

/**
 * create_item - creates hash item
 * @key: item key
 * @value: item value
 *
 * Return: hash node
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}

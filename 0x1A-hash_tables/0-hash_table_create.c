#include "hash_tables.h"
hash_node_t *create_item(char *key, char *value);
/**
 * hash_table_create - creates a hash table.
 * @size: size of hash table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
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
hash_node_t *create_item(char *key, char *value)
{
	hash_node_t *node;

	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = (char *) malloc(strlen(key) + 1);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = (char *) malloc(strlen(value) + 1);
	if (node->value == NULL)
	{
		free(node);
		free(node->key);
		return (NULL);
	}
	node->next = malloc(sizeof(hash_node_t *));
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}

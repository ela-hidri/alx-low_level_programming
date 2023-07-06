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

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
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
	node->key = (char *) malloc(strlen(key) + 1);
	node->value = (char *) malloc(strlen(value) + 1);
	node->next = malloc(sizeof(hash_node_t *));
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}

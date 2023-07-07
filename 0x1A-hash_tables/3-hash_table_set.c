#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @Value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *cp_value;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	cp_value= strdup(value);
	if (cp_value == NULL)
		return (0);
	if (ht == NULL || strcmp(key, "") == 0 || strcmp(value, "") == 0)
		return(0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = cp_value;
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return(1);
		}
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
	/*if (node == NULL)
	{
		printf("inherr");
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			handle_collision(ht, node, index);
		}
	}*/


/**
 * handle_collision - handle collisions
 * @ht: hash table
 * @node: node to add
 *
 * Return: nothing
*/
/*
void handle_collision(hash_table_t *ht, hash_node_t *new,
	       unsigned long int index)
{
	hash_node_t *node = ht->array[index];

	if (node->next == NULL)
	{
		node->next = new;
		return ;
	}
	while (node->next->next)
	{
		node = node->next;
	}
	node->next = new;
}*/

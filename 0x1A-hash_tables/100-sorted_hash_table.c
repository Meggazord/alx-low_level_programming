#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, size * sizeof(shash_node_t *));
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Sets a key/value pair in the sorted hash table
 * @ht: The sorted hash table to modify
 * @key: The key to insert or modify
 * @value: The value corresponding to the key
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node;

	if (!ht || !key || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = NULL;
	ht->array[index] = new_node;
	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		shash_node_t *temp = ht->shead;
		while (temp && strcmp(temp->key, key) < 0)
			temp = temp->snext;
		if (!temp)
		{
			ht->stail->snext = new_node;
			new_node->sprev = ht->stail;
			ht->stail = new_node;
		}
		else
		{
			if (temp->sprev)
				temp->sprev->snext = new_node;
			else
				ht->shead = new_node;
			new_node->sprev = temp->sprev;
			new_node->snext = temp;
			temp->sprev = new_node;
		}
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a given key
 * @ht: The sorted hash table to search in
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table key/value pairs in order
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash in reverse order
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	if (!ht)
		return;

	node = ht->stail;

	printf("{");
	while (node) {
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *node = ht->array[i];
		while (node) {
			shash_node_t *temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		ht->array[i] = NULL;
	}

	node = ht->shead;
	while (node)
	{
		shash_node_t *temp = node;
		node = node->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

	free(ht->array);
	free(ht);
}

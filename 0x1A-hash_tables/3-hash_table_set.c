#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to the hash table to add or update the key/value to.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	/* Check if the hash table or the key are NULL */
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	/* Get the index where to store the key/value pair */
	index = key_index((unsigned char *)key, ht->size);

	/* Create a new node and check if memory allocation fails */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Fill the new node with the key/value pair */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Initialize the next pointer to NULL */
	new_node->next = NULL;

	/* Check if the key already exists in the hash table */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Update the value and free the new node */
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* Add the new node at the beginning of the list at the index */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

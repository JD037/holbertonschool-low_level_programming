#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *head;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			temp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = temp;
		}
	}
	free(ht->array);
	free(ht);
}

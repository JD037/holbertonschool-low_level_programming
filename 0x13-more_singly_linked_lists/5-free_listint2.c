#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}

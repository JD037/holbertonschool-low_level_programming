#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: double pointer to the beginning of the linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (current->next != NULL)
			current->next->prev = NULL;

		free(current);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	tmp = current->prev;
	tmp->next = current->next;

	if (current->next != NULL)
		current->next->prev = tmp;

	free(current);
	return (1);
}

#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements dlistint_t list backward
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *last = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
		h = h->next;

	last = h;

	while (last != NULL)
	{
		printf("%d\n", last->n);
		last = last->prev;
		count++;
	}

	return (count);
}

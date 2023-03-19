#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the first node of the list.
 * @idx: Index where the new node should be added. Starts at 0
 * @n: Data for the new node.
 *
 * Return: Address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/* Check if head is NULL and index is 0 */
	if (head == NULL && idx == 0)
		return (add_nodeint(&(*head), n));

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;

	/* Traverse the linked list to find the node at position idx - 1 */
	temp_node = *head;
	for (i = 0; i < idx - 1 && temp_node != NULL; i++)
		temp_node = temp_node->next;

	/* If temp_node is NULL, it means idx is out of range */
	if (temp_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node */
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer to the head of the linked listint_t list.
 * @n: The integer data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}

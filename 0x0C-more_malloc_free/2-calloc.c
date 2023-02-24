#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (ptr);
}

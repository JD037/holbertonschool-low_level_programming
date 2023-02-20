#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: NULL if size = 0, or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr; /* Declare a pointer to a char */
	unsigned int i;

	if (size == 0) /* Check if size is 0 */
		return (NULL); /* If size is 0, return NULL */

	arr = malloc(sizeof(char) * size);/* Allocate memory for the array */
	if (arr == NULL) /* Check if malloc failed */
		return (NULL); /* If malloc failed, return NULL */

	for (unsigned int i = 0; i < size; i++) /* Loopeach elementinthearray */
		arr[i] = c; /* Set value of each element to the given char */

	return (arr); /* Return a pointer to the array */
}



#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * @name: pointer to dog name string
 * @age: age of the dog
 * @owner: pointer to dog owner string
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len, i;

	new_dog = malloc(sizeof(dog_t)); /* allocate memory for new dog struct */

	if (new_dog == NULL) /* check if memory allocation was successful */
		return (NULL);

	for (name_len = 0; name[name_len] != '\0'; name_len++);
	/* get length of name string */

	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++);
	/* get length of owner string */

	new_dog->name = malloc(sizeof(char) * (name_len + 1)); /* allocate memory */
	if (new_dog->name == NULL) /* check if memory allocation was successful */
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (owner_len + 1)); /* allocate memory */
	if (new_dog->owner == NULL) /* check if memory allocation was successful */
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i]; /* copy name string to new dog struct */

	new_dog->age = age; /* set age in new dog struct */

	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i]; /* copy owner string to new dog struct */
	return (new_dog);
}

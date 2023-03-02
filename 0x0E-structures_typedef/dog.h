#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog (string)
 * @age: the age of the dog (float)
 * @owner: the name of the dog's owner (string)
 *
 * Description: a structure representing basic information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

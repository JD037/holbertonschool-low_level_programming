#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: the name of the dog (string)
 * @age: the age of the dog (float)
 * @owner: the name of the dog's owner (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

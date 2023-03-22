#include "dog.h"

/**
 * new_dog - creates a new variable of struct dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: pointer to the new created struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t) * 1);
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}

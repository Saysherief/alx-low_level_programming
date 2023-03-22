#include "dog.h"

/**
 * init_dog - initializez a variable of struct dog
 * @d: struct dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

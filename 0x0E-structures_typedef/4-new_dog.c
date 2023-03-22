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
	int i, namel, ownerl;

	d = malloc(sizeof(dog_t) * 1);
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		if (name != NULL)
		{
			for (i = 0; name[i] != '\0'; i++);
			namel = i + 1;/*for '\0' at the end*/
			d->name = malloc(sizeof(char) * namel);
			if (d->name)
				d->name = name;
		}
		d->age = age;
		if (owner != NULL)
		{
			for (i = 0; owner[i] != '\0'; i++);
			ownerl = i + 1;/*for '\0' at the end*/
			d->owner = malloc(sizeof(char) * ownerl);
			if (d->owner)
				d->owner = owner;
		}
	}
	return (d);
}

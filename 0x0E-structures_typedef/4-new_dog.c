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
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	namel = i + 1;/*for '\0' at the end*/
	d->name = malloc(sizeof(char) * namel);
	d->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		;
	ownerl = i + 1;/*for '\0' at the end*/
	d->owner = malloc(sizeof(char) * ownerl);
	if (!(d->name) || !(d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0; i < namel; i++)
		d->name[i] = name[i];
	for (i = 0; i < ownerl; i++)
		d->owner[i] = owner[i];
	return (d);
}

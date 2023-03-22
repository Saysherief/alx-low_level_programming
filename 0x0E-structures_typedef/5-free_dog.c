#include "dog.h"

/**
 * free_dog - frees the memory allocated by struct dog
 * @d: pointer to the struct dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (!(d == NULL))
	{
		free (d);
	}
}

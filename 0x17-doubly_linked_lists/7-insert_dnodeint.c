#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the pointer to the pointer of the first node of dlistint_t
 * @idx: the index of the new node to be added in dlistint_t
 * @n: value of the new node
 * Return: the address of the nth node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *nth = NULL;
	unsigned int i = 0;

	if (idx > 0 && *h == NULL)
		return (NULL);
	if (idx == 0)
	{
		nth = add_dnodeint(&tmp, n);
		if (nth == NULL)
			return (NULL);
		nth->next = *h;
		nth->prev = NULL;
		*h = nth;
	}
	else
	{
		while (i < (idx - 1) && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		if (tmp == NULL)
			return (NULL);
		nth = malloc(sizeof(dlistint_t));
		if (nth == NULL)
			return (NULL);
		nth->n = n;
		nth->prev = tmp;
		nth->next = tmp->next;
		if (tmp->next != NULL)
			(tmp->next)->prev = nth;
		tmp->next = nth;
	}
	return (nth);
}

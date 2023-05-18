#include "lists.h"

size_t dlistint_len(const dlistint_t *h);
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the pointer to the pointer of the first node of dlistint_t
 * @idx: the index of the new node to be added in dlistint_t
 * @n: value of the new node
 * Return: the address of the nth node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *tmp2, *nth = NULL;
	unsigned int i = 0, len = (dlistint_len(tmp));

	if (idx > len)
		return (NULL);
	else if ((*h == NULL) && (idx == 0))
	{
		nth = add_dnodeint(&tmp, n);
		nth->next = NULL;
		nth->prev = NULL;
		*h = nth;
	}
	else
	{
		if (idx == 0)
		{
			nth = add_dnodeint(&tmp, n);
			nth->next = *h;
			nth->prev = NULL;
			*h = nth;
		}
		else if (idx == len)
		{
			nth = add_dnodeint_end(&tmp, n);
			nth->next = NULL;
		}
		else
		{
			nth = *h;
			while ((i < idx - 1) && nth != NULL)
			{
				nth = nth->next;
				i++;
			}
			tmp = nth;
			tmp2 = nth->next;
			nth = malloc(sizeof(dlistint_t));
			if (nth == NULL)
				return (NULL);
			nth->n = n;
			tmp->next = nth;
			nth->prev = tmp;
			nth->next = tmp2;
			tmp2->prev = nth;
		}
	}
	return (nth);
}

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the first node of dlistint_t
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

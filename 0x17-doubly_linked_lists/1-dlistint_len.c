#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the first node of listint_t
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

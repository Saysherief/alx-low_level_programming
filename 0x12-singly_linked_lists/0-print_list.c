#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node of list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", s->len, s->str);
		s = s->next;
		nnodes++:
	}
	return (nodes);
}

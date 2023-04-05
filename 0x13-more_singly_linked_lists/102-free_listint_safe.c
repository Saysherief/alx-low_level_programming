#include "lists.h"

/**
 * free_listint_safe - frees listint_t list and sets head to NULL
 * @h: pointer to the pointer of the first node of listint_t
 * Return: nothing
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *first, *list = *h;
	size_t nnode = 0;

	if (list == NULL)
	{
		free(list);
		return (0);
	}
	while (list)
	{
		first = list->next;
		free(list);
		list = first;
		nnode += 1;
	}
	*h = NULL;
	return (nnode);
}

#include "lists.h"

/**
 * free_listint2 - frees listint_t list and sets head to NULL
 * @head: pointer to the pointer of the first node of listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *first, *list = *head;

	if (list == NULL)
	{
		free(list);
	}
	while (list)
	{
		first = list->next;
		free(list);
		list = first;
	}
	*head = NULL;
}

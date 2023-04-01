#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to the pointer of the first node of list_t
 * Return:nothing
 */
void free_list(list_t *head)
{
	list_t *first;
	while (head)
	{
		first = head->next;
		free(head->str);
		free(head);
		head = first;
	}
}

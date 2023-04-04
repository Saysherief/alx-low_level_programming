#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: pointer to the pointer of the first node of listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *first;

	while (head)
	{
		first = head->next;
		free(head);
		head = first;
	}
}

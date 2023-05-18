#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: pointer to the pointer of the first node of listint_t
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first;

	while (head)
	{
		first = head->next;
		free(head);
		head = first;
	}
}

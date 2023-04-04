#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to the pointer of the first node of listint_t
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *first = *head;
	int n = 0;

	if (first)
	{
		*head = first->next;
		n = first->n;
		free(first);
		return (n);
	}
	else
		return (n);
}

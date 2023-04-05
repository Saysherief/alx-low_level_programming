#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer of the first node of listint_t
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head, *rev_head = *head;

	if (*head != NULL)
	{
		while (tmp->next != NULL)
		{
			rev_head = rev_head->next;
			tmp = rev_head->next;
			tmp->next = rev_head->next->next;
			*head = tmp;
			rev_head->next = tmp;
		}
	}
	return (*head);
}

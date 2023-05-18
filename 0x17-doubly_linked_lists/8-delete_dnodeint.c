#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index position
 * @head: the pointer to the pointer of the first node of dlistint_t
 * @index: the index of the node to be deleted in dlistint_t
 * Return: 1 if it succeedes, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nth = *head;
	unsigned int i = 0;

	if (nth == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = nth->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(nth);
		return (1);
	}
	else
	{
		while (i < index && nth != NULL)
		{
			nth = nth->next;
			i++;
		}
	}
	if (nth == NULL)
		return (-1);
	(nth->prev)->next = nth->next;
	if (nth->next != NULL)
		(nth->next)->prev = nth->prev;
	free(nth);
	return (1);
}

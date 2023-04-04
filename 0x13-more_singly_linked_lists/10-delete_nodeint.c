#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index position
 * @head: the pointer to the pointer of the first node of listint_t
 * @index: the index of the node to be deleted in listint_t
 * Return: 1 if it succeedes, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *nth = *head;
	unsigned int i = 0;

	if (nth == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = nth->next;
		free(nth);
		return (1);
	}
	else
	{
		while (i < index - 1)
		{
			nth = nth->next;
			i++;
		}
	}
	tmp = nth;
	nth = nth->next;
	if (nth == NULL)
		return (-1);
	tmp->next = nth->next;
	free(nth);
	return (1);
}

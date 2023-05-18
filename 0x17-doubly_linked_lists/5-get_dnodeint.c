#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the pointer of the first node of listint_t
 * @index: the index of the listint_t to be retreived
 * Return: the address of the nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		nth = head;
		while (i < index)
		{
			nth = nth->next;
			i++;
		}
	}
	return (nth);
}

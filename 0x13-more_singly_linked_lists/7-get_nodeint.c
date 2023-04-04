#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the pointer of the first node of listint_t
 * @index: the index of the listint_t to be retreived
 * Return: the address of the nth node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth = NULL;
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

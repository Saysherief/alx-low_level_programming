#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to the pointer of the first node of listint_t
 * @idx: the index of the new node to be added in listint_t
 * @n: value of the new node
 * Return: the address of the nth node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2, *nth = NULL;
	unsigned int i = 0;

	if (*head != NULL)
	{
		nth = *head;
		while (i < idx - 1)
		{
			nth = nth->next;
			i++;
		}
	}
	tmp = nth;
	tmp2 = nth->next;
	nth = malloc(sizeof(listint_t));
	if (nth == NULL)
		return (NULL);
	nth->n = n;
	tmp->next = nth;
	nth->next = tmp2;
	return (nth);
}

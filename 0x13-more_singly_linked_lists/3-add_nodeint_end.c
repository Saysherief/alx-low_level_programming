#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked listint_t list
 * @head: pointer to the pointer of the first node of listint_t
 * @n: the new added node copies value n passed in the parameter
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *last = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
		*head = add;
	else
	{
		while (last->next)
			last = last->next;
		last->next = add;
	}
	return (add);
}

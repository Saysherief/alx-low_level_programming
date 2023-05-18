#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the pointer of the first node of listint_t
 * @n: the new added node copies value n passed in the parameter
 * Return: the address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
	}
	else
	{
		dlistint_t *last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = add;
		add->prev = last;
	}
	return (add);
}

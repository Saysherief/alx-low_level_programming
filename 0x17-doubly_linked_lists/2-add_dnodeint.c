#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer of the first node of listint_t
 * @n: the new added node copies value n passed in the parameter
 * Return: the address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	add->prev = NULL;
	if (*head != NULL)
		(*head)->prev = add;
	*head = add;
	return (add);
}

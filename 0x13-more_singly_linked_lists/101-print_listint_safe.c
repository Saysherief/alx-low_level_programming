#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 * @head: pointer to the first node of listint_t
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	return (nnodes);
}

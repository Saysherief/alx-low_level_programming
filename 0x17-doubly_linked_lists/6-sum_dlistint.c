#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t list
 * @head: the pointer of the first node of dlistint_t
 * Return: the sum of all the data(n) of a dlistint_t or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}

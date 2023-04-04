#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the pointer of the first node of listint_t
 * Return: the sum of all the data (n) of a listint_t or 0 if list is empty
*/
int sum_listint(listint_t *head)
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

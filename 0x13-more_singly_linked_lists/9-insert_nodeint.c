#include "lists.h"

listint_t *insertnode(listint_t **head, int n);
size_t listint_len(const listint_t *h);
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to the pointer of the first node of listint_t
 * @idx: the index of the new node to be added in listint_t
 * @n: value of the new node
 * Return: the address of the nth node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *tmp2, *nth = NULL;
	unsigned int i = 0, len = (listint_len(tmp));

	if (idx > len)
		return (NULL);
	else if ((*head == NULL) && (idx == 0))
	{
		nth = insertnode(&tmp, n);
		nth->next = *head;
		*head = nth;
	}
	else
	{
		if (idx == 0)
		{
			nth = insertnode(&tmp, n);
			nth->next = *head;
			*head = nth;
		}
		else
		{
			nth = *head;
			while ((i < idx - 1) && nth != NULL)
			{
				nth = nth->next;
				i++;
			}
			tmp = nth;
			tmp2 = nth->next;
			nth = malloc(sizeof(listint_t));
			if (nth == NULL)
				return (NULL);
			nth->n = n;
			tmp->next = nth;
			nth->next = tmp2;
		}
	}
	return (nth);
}

/**
 * insertnode - insets a node at the very begining
 * @head: pointer to the first node
 * @n: value of the node
 * Return: pointer to the inserted node
 */
listint_t *insertnode(listint_t **head, int n)
{
	listint_t *nth;

	nth = malloc(sizeof(listint_t));
	if (nth == NULL)
		return (NULL);
	nth->n = n;
	nth->next = *head;
	*head = nth;
	return (nth);
}

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the first node of listint_t
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

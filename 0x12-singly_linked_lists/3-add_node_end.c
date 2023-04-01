#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list_t list
 * @head: pointer to the pointer of the first node of list_t
 * @str: the new added node duplicates str
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupstr;
	int len = 0;
	list_t *add, *last;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	dupstr = strdup(str);
	if (dupstr == NULL)
	{
		free(add);
		return (NULL);
	}
	while (str[len])
		len++;
	add->str = dupstr;
	add->len = len;
	add->next = NULL;
	if (*head == NULL)
		*head = add;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = add;
	}
	return (add);
}

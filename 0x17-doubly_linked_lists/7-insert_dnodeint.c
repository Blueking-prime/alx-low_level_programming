#include "lists.h"

/**
* insert_dnodeint_at_index - adds a new node at a point in a dlistint_t list
* @h: pointer to pointer of first node of dlistint_t list
* @idx: index where node is to be included
* @n: integer to be included in new node
* Return: address of the new element or NULL if it fails
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int count;

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (new);
	}
	count = 0;
	while (count != idx && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (count < idx)
	{
		return (NULL);
		free(new);
	}
	if (current == NULL)
		add_dnodeint_end(h, n);
	else if (current->prev == NULL)
		add_dnodeint(h, n);
	else
	{
		current->prev->next = new;
		new->next = current;
		new->prev = current->prev;
		current->prev = new;
	}
	return (new);
}

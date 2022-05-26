#include "lists.h"

/**
* listint_length - Calculates number of items in a list
*
* @h: List to be printed
*
* Return: (Always/Success)
*/

int listint_length(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	return (1 + listint_length(h->next));
}

/**
* *insert_nodeint_at_index - Entry point
*
* @head: current head of list
*
* @idx: number in node
*
* @n: number to insert
*
* Return: (Always/Success)
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	current = *head;

	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;

	return (new);
}

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
* *add_nodeint_end - Entry point
*
* @head: current head of list
*
* @n: number in node
*
* Return: (Always/Success)
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i, j;
	listint_t *new;
	listint_t *currrent_last_node = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	j = listint_length(*head);

	if (j == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < j - 1; i++)
	{
		currrent_last_node = currrent_last_node->next;
	}

	new->next = NULL;
	currrent_last_node->next = new;

	return (new);
}

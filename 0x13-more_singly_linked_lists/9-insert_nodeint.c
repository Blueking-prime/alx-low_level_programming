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
	int i, j, k;
	listint_t *new;
	listint_t *previous_node = *head;

	k = (int) idx;

	j = listint_length(*head);

	if (k > j - 1)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;

	if (k == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for(i = 0; i < k - 1; i++)
	{
		previous_node = previous_node->next;
	}

	new->next = previous_node->next;
	previous_node->next = new;

	return (new);
}

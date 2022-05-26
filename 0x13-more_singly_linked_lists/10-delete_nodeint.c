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
* *delete_nodeint_at_index - Entry point
*
* @head: current head of list
*
* @index: number in node
*
* @n: number to insert
*
* Return: (Always/Success)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i, j, k;
	listint_t *next_node;
	listint_t *previous_node = *head;

	k = (int) index;

	j = listint_length(*head);

	if (k > j - 1)
	{
		return (-1);
	}

	if (k == 0)
	{
		*head = previous_node->next;
		return (1);
	}

	for (i = 0; i < k - 1; i++)
	{
		previous_node = previous_node->next;
	}

	previous_node->next = next_node->next;
	free(next_node);

	return (1);
}

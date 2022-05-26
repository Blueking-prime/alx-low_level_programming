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
* *get_nodeint_at_index - Entry point
*
* @head: current head of list
*
* @index: number in node
*
* Return: (Always/Success)
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i, j, k;
	listint_t *currrent_node = head;

	k = (int) index;
	j = listint_length(head);

	if (k > j - 1)
	{
		return (NULL);
	}

	if (j == 0)
	{
		return (head);
	}

	for(i = 0; i < k; i++)
	{
		currrent_node = currrent_node->next;
	}

	return (currrent_node);
}

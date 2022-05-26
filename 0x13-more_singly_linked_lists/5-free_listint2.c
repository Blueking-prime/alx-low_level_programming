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
* free_listint2 - Entry point
*
* @head: List to be freed
*
* Return: (Always/Success)
*/

void free_listint2(listint_t **head)
{
	int i, j;

	listint_t *temp, *current_node = *head;

	if (*head == NULL)
	{
		return;
	}

	j = listint_length(*head);

	for (i = 0; i < j - 1; i++)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}
}

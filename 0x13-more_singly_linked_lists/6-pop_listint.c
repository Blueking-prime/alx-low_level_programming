#include "lists.h"

/**
* pop_listint - Entry point
*
* @head: current head of list
*
* Return: (Always/Success)
*/

int pop_listint(listint_t **head)
{
	listint_t *node = *head;

	if (*head == NULL)
	{
		return (0);
	}

	*head = node->next;
	free(node);

	return ((*head)->n);
}

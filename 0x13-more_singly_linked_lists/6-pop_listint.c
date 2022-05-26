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
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	num = node->n;

	*head = node->next;
	free(node);

	return (num);
}

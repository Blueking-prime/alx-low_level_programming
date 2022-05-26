#include "lists.h"

/**
* free_listint2 - Entry point
*
* @head: List to be freed
*
* Return: (Always/Success)
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return;
	}

	for (; *head != NULL;)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}

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
	listint_t *temp, *current_node = *head;

	if (*head == NULL)
	{
		return;
	}

	for (; *head != NULL;)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}
}

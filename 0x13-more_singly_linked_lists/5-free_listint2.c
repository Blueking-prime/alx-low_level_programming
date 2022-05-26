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
	if (*head == NULL)
	{
		return;
	}

	free_listint2((*head)->next);

	free(*head);
}

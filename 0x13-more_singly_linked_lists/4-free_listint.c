#include "lists.h"

/**
* free_listint - Entry point
*
* @head: List to be freed
*
* Return: (Always/Success)
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint(head->next);

	free(head);
}

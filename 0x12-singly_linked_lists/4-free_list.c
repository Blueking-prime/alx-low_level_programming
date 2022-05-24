#include "lists.h"

/**
* free_list - Entry point
*
* @head: List to be freed
*
* Return: (Always/Success)
*/

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);

	free(head->str);
	free(head);
}

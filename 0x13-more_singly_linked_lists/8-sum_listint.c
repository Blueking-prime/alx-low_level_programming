#include "lists.h"

/**
* sum_listint - Entry point
*
* @head: List to be printed
*
* Return: (Always/Success)
*/

int sum_listint(listint_t *head)
{
	if (head == NULL)
	{
		return (0);
	}

	return (head->n + sum_listint(head->next));
}

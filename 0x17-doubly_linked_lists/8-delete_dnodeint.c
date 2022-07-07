#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node at a point in a dlistint_t list
* @head: pointer to pointer of first node of dlistint_t list
* @index: index where node is to be deleted
* Return: address of the new element or NULL if it fails
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	current = *head;

	if (*head == NULL)
		return (-1);

	count = 0;
	while (count != index && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (count < index)
		return (-1);

	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
	}
	else if (current->prev == NULL)
	{
		*head = current->next;
		current->next->prev = NULL;
		free(current);
	}
	else
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
	}
	return (1);
}

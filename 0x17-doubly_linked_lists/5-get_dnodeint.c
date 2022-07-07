#include "lists.h"

/**
* get_dnodeint_at_index - gets the node at a point in a dlistint_t list
* @head: pointer to pointer of first node of dlistint_t list
* @index: index where node is to be gotten from
* Return: address of the new element or NULL if it fails
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	current = head;

	if (head == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (count != index && current != NULL)
	{
		current = current->next;
		count++;
	}

	if (count < index)
		return (NULL);

	return (current);
}

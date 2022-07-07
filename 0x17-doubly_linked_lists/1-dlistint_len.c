#include "lists.h"

/**
* dlistint_len - counts all elements of a dlistint_t list
* @h: pointer to head of list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n;

	current = h;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}

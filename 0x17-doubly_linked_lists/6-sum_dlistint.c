#include "lists.h"

/**
* sum_dlistint - sums all values of a dlistint_t list
* @head: pointer to head of list
* Return: sum of node values
*/
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *current;
	int s;

	current = head;
	s = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		s += current->n;
		current = current->next;
	}

	return (s);
}

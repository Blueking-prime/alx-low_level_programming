#include "lists.h"

/**
* *add_nodeint - Entry point
*
* @head: current head of list
*
* @n: number in node
*
* Return: (Always/Success)
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

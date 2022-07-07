#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a listint_t list
* @head: pointer to pointer of first node of listint_t list
* @n: integer to be included in new node
* Return: address of the new element or NULL if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		*head = new;
		new->next = current;
		current->prev = new;
	}

	return (new);
}

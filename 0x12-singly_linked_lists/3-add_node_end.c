#include "lists.h"

/**
* _strlen - Finds length of string
*
* @s: Input string
*
* Return: (Always/Success)
*/

unsigned int _strlen(const char *s)
{
const char *p = *s;
unsigned int j = 0;

while (*p != '\0')
{
j++;
p++;
}

return (j);
}

/**
* *last_node - Finds the last node in a list
*
* @head: head of the list
*
* Return: (Always/Success)
*/

list_t *last_node(list_t *head)
{
	if (head->next == NULL)
	{
		return (head);
	}

	else
	{
		return (last_node(head->next));
	}
}

/**
* *add_node_end - Entry point
*
* @head: current head of list
*
* @str: name of node
*
* Return: (Always/Success)
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last_node_address;

	last_node_address = last_node(*head);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	last_node_address = new;
	new->next = NULL;

	return (new);
}

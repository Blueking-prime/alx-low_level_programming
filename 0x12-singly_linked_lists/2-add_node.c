#include "lists.h"

/**
* _strlen - Finds length of string
*
* @s: input string
*
* Return: (Always/Success)
*/

unsigned int _strlen(const char *s)
{
char *p;
unsigned int j = 0;
p = s;

while (*p != '\0')
{
j++;
p++;
}

return (j);
}

/**
* *add_node - Entry point
*
* @head: current head of list
*
* @str: name of node
*
* Return: (Always/Success)
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

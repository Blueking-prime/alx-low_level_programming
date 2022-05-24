#include "lists.h"

/**
* print_list - Entry point
*
* @h: List to be printed
*
* Return: (Always/Success)
*/

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}

	return (1 + print_list(h->next));
}

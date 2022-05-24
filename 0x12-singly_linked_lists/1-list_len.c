#include "lists.h"

/**
* list_len - Entry point
*
* @h: List to be printed
*
* Return: (Always/Success)
*/

size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	return (1 + list_len(h->next));
}

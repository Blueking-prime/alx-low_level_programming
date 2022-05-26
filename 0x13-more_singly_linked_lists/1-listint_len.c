#include "lists.h"

/**
* listint_len - Entry point
*
* @h: List to be printed
*
* Return: (Always/Success)
*/

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	return (1 + listint_len(h->next));
}

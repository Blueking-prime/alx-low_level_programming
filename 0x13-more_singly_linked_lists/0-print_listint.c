#include "lists.h"

/**
* print_listint - Entry point
*
* @h: List to be printed
*
* Return: (Always/Success)
*/

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	printf("%d\n", h->n);

	return (1 + print_listint(h->next));
}

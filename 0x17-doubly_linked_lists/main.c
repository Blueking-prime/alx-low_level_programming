#include "lists.h"

/**
* main - check the code
*
* Return: Always EXIT_SUCCESS.
*/
int main(void)
{
	dlistint_t *head;
	dlistint_t *node;
	int sum;
	size_t n;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);

	printf("\nLENGTH TESTS BEGIN\n");
	printf("-----------------\n");
	n = dlistint_len(head);
	printf("-> %lu elements\n", n);

	printf("\nFRONT-ADD TESTS BEGIN\n");
	printf("-----------------\n");
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 2);
	add_dnodeint(&head, 3);
	print_dlistint(head);

	printf("\nGET TESTS BEGIN\n");
	printf("-----------------\n");
	node = get_dnodeint_at_index(head, 5);
	printf("%d\n", node->n);

	printf("\nSUM TESTS BEGIN\n");
	printf("-----------------\n");
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);

	printf("\nINSERT TESTS BEGIN\n");
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 11, 4096);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 4096);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 5, 4096);
	print_dlistint(head);

	printf("\nDELETE TESTS BEGIN\n");
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 11);
	print_dlistint(head);

	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
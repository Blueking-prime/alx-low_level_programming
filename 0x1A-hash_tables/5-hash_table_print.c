#include "hash_tables.h"

/**
* hash_table_print - Prints  a hash table
*
* @ht: The hash table
*
* Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int current_idx = 0;
	int print_check = 0;

	if (ht == NULL) /* Checks if hash table exists */
		return;

	printf("{");

	while (current_idx < ht->size)
	{
		node = ht->array[current_idx];
		while (node != NULL)
		{
			if (print_check > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			print_check++;
			node = node->next;
		}
		current_idx++;
	}

	printf("}\n");
}

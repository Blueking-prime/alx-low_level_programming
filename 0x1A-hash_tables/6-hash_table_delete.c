#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table
*
* @ht: The hash table
*
* Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int current_idx = 0;
	hash_node_t *node;
	hash_node_t *next;

	if (ht == NULL) /* Checks if hash table exists */
		return;

	while (current_idx < ht->size)
	{
		node = ht->array[current_idx];
		if (node->next == NULL)
		{
			free(node->key);
			free(node->value);
			free(node);
		}
		else
		{
			while (node != NULL)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
			free(ht->array[current_idx]);
		}
		current_idx++;
	}
	free(ht->array);
	free(ht);
}

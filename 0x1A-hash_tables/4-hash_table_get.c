#include "hash_tables.h"

/**
* hash_table_get - Retrieves an element from a hash table
*
* @ht: The hash table
*
* @key: The key
*
* Return: Value associated with key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (key == NULL) /* Checks if key is empty */
		return (NULL);

	if (ht == NULL) /* Checks if hash table exists */
		return (NULL);

	if (ht->array[index] == NULL) /* Checks if theres anything at the index */
		return (NULL);

	node = ht->array[index];
	if (strcmp(node->key, key) == 0) /* Checks if array is a chain */
		return (node->value);

	while (node->next != NULL)
	{
		node = node->next;
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}

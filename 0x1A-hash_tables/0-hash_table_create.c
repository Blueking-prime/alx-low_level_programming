#include "hash_tables.h"

/**
* hash_table_create - Creates a new hashtable
*
* @size: Size of the hashtable
*
* Return: Address of hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
		return (NULL);

	new->size = size;
	new->array = array;

	return (new);
}

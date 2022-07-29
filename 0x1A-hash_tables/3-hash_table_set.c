#include "hash_tables.h"

/**
* hash_table_set -Adds an element to a hashtable
*
* @ht: The hash table
*
* @key: The key
*
* @value: value stored in the key
*
* Return: Address of hash table
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (key == NULL) /* Checks if key is empty */
		return (0);

	if (ht == NULL) /* Checks if hash table exists */
		return (0);

	new = malloc(sizeof(hash_node_t)); /* Create new node */
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL) /* Adds node to table if it doesnt exist */
		ht->array[index] = new;
	else /* Adds node to chain */
		add_node(ht->array[index], key, value);

	return (1);
}

/**
* *add_node - Creates a new node off the table
*
* @head: current head of chain
*
* @key: key of node
*
* @value: value of node
*
* Return: new node
*/

hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = head;
	head = new;

	return (new);
}

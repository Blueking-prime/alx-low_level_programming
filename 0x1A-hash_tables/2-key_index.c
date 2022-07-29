#include "hash_tables.h"

/**
* key_index - Creates a hash using the djb2 algorithm
*
* @key: key
*
* @size: size of the hash table array
*
* Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key) % size;

	return (hash);
}

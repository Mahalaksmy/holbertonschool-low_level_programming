#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: string to pass through djb2 algorithm.
 * @size: size of the hash table.
 * Return: the index of the element otherwhise 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

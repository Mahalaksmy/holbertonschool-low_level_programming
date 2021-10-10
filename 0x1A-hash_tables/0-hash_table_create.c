#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: size of the hash table
 * Return: New hash table or  returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	HT = malloc(sizeof(hash_table_t));

	if (size <= 0)
		return (NULL);

	if (!new_table)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_table_t *));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	return (new_table);
}

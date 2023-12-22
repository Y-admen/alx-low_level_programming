#include "hash_tables.h"

/**
 * hash_table_create - Create the hash table.
 * @size: Size of the table.
 *
 * Return: The hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	if (!size)
	return (NULL); /* Zero is not a valid argument */
	table = malloc(sizeof(hash_table_t));
	if (!table)
	return (NULL); /* Allocation failed */
	table->size = size;
	table->array = malloc(sizeof(hash_node_t*) * size);
	if (!table->array)
	return (NULL); /* Allocation failed */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

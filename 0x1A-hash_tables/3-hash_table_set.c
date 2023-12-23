#include "hash_tables.h"
/**
 * hash_table_set - Set a value in the hash table.
 * @ht: Hash table.
 * @key: Key to be indexed.
 * @value: Value to set in the hash table.
 *
 * Return: 1 if works, 0 if doesn't.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *newnode, *currentindex;

	if (!key || !value)
	return (0);
	index = hash_djb2((const unsigned char *) key) % ht->size;
	currentindex = ht->array[index];
	for (currentindex;; currentindex->next)
	{
		if (!strcmp(currentindex->key, key))
		{
			free(currentindex->value);
			currentindex->value = strdup(value);
			return (1);
		}
	}

	
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
	return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}

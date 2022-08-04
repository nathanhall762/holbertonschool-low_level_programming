#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: the hash table you want to add or update the key/value to
* @key: the key
* @value: value associated with the key
*
* Return: 1 if succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;
	hash_node_t*new = NULL;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	tmp = ht->array[index];

	if (tmp && strcmp(key, tmp->key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

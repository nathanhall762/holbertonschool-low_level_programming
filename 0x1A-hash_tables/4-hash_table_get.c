#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: the hash table you want to look into
* @key: the key you are looking for
*
* Return: the value associated with the element, or NULL if key not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;


	index = key_index((unsigned char *) key, ht->size);
	tmp = ht->array[index];

	if (tmp == NULL)
		return (NULL);

	while (strcmp(key, tmp->key) != 0)
		tmp = tmp->next;

	return (tmp->value);
}

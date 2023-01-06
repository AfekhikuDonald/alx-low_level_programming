#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if successful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
    
	if (strlen(key) == 0) {
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL) {
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
       	{
		ht->array[index] = new_node;
	}
       	else
       	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

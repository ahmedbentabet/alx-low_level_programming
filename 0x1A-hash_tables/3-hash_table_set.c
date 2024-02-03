#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current_node = ht->array[index];

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);  /*Key found and updated*/
		}
		current_node = current_node->next;
	}

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t)); /*notFoundLetAddIt*/
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;   /*Set the next pointer of the new node to NULL*/
	if (ht->array[index] == NULL) /*insert the new node*/
		ht->array[index] = new_node;
	else
	{	/*If there's collision*/
		new_node->next = current_node;
		ht->array[index] = new_node;
	}
	return (1);
}

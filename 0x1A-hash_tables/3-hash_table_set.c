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
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	/*Check if the ht or key is NULL, or if the key is an empty string*/
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	/*Calculate the index where the new node should be inserted*/
	index = key_index((const unsigned char *)key, ht->size);

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/*Duplicate the key and check for allocation failure*/
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;   /*Set the next pointer of the new node to NULL*/

	/*If the array at the calculated index is empty, insert the new node*/
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		current_node = ht->array[index]; /*If there's collision*/
		new_node->next = current_node;
		ht->array[index] = new_node;
	}
	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value of the key, or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	/* Check if the hash table, key, or if the key is an empty string */
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	/* Calculate the index where the key should be located */
	index = key_index((const unsigned char *)key, ht->size);

	/* If the array at the calculated index is empty, the key is not present */
	if (ht->array[index] == NULL)
		return (NULL);

	/* Traverse the linked list at the calculated index to find the key */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		/* Compare the current node's key with the target key */
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		/* Move to the next node in the linked list */
		current_node = current_node->next;
	}

	/* Return NULL if the key couldn't be found in the linked list */
	return (NULL);
}

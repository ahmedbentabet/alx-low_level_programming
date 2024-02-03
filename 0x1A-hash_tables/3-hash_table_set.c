#include "hash_tables.h"

/**
 * create_node - creates a new node
 *
 * @key: the key for the new node
 * @value: the value for the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current_node;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1); /* Key found and updated */
		}
		current_node = current_node->next;
	}

	/*key not found, so lets add it*/
	new_node = create_node(key, value);
	if (new_node == NULL)
		free(new_node);
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		current_node = ht->array[index];
		new_node->next = current_node;
		ht->array[index] = new_node;
	}

	return (1);
}

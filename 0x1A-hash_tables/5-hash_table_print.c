#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int print_once = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				if (print_once != 0)
					printf(", ");

				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
				if (print_once == 0)
					print_once = 1;
			}
		}
	}
	printf("}\n");
}

#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n).
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Sum of all the data in the linked list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

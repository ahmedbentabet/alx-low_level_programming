#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to a pointer to the head of the list.
 *
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current;

	if (*head == NULL || head == NULL)
		return (0);

	current = *head;
	data = current->n;
	*head = (*head)->next;
	free(current);
	return (data);
}

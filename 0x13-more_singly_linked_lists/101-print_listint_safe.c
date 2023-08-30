#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely.
 * @head: a pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		fast = fast->next->next;

		count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}

	if (fast == NULL || fast->next == NULL)
	{
		while (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			count++;
		}
	}
	return (count);
}


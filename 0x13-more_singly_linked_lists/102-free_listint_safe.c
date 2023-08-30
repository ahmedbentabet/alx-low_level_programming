#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: a pointer to a pointer to the head of the list.
 *
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (count);
}



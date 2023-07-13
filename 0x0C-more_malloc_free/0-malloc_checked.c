#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc
 * @b: The size of the memory to allocate
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
}

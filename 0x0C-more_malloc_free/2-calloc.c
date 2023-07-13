#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb * size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = '0';
	}

	return (array);
}

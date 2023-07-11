#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 * @size: The size of the array.
 * @c: The specific char
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);

	char *array;

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (0);

	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

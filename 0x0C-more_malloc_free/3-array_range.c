#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers in a range
 * @min: Minimum value of the range (inclusive)
 * @max: Maximum value of the range (inclusive)
 *
 * Return: Pointer to the allocated array, or NULL on failure or if min > max
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}

	return (array);
}

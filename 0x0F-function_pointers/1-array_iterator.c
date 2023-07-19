#include "function_pointers.h"

/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: The array.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

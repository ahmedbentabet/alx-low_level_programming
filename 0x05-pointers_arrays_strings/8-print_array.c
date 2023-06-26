#include "main.h"

/**
 * print_array - Prints elements of an array
 * @a: The input array
 * @n: The number of elements in the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

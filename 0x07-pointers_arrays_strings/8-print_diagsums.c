#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 += *(a + i * (size + 1));
		sum2 += *(a + (i + 1) * (size - 1));
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of its variable number of arguments.
 * @n: The number of arguments passed to the function.
 *
 * Return: The sum of the integers. If n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, x;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_end(args);
	return (sum);
}

#include "main.h"

/**
 * main - Prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int previous, current, next, sum;

	previous = sum = 0;
	current = 1;
	while (current <= 4000000)
	{
		next = previous + current;
		previous = current;
		current = next;
		if (current % 2 == 0)
			sum += current;
	}
	printf("%lu\n", sum);

	return (0);
}

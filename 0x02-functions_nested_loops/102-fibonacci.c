#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;
	long int previous, current, next;

	previous = current = 1;
	while (count < 50)
	{
		if (count == 49)
		{
			printf("%lu\n", current);
		}
		else
		{
			printf("%lu, ", current);
		}
		next = previous + current;
		previous = current;
		current = next;
		count++;
	}
	return 0;
}

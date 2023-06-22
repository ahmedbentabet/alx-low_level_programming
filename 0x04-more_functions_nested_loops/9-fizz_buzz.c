#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf(" FizzBuzz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else if (n % 3 == 0)
			printf(" Fizz");
		else
			printf(" %d", n);
	}
	return (0);
}

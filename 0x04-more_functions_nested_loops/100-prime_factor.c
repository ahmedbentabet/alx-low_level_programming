#include "main.h"

/**
 * main - Finds the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long long int n = 612852475143;
	long int i = 2;

	while (i < n)
	{
		while (n % i == 0)
			n /= i;
		i++;
	}
	printf("%lld\n", n);
	return (0);
}

#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (my_prime(n, 2));
}

/**
 * my_prime - Helper function for is_prime_number.
 * @n: The number.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int my_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (divisor == n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (my_prime(n, divisor + 1));
}

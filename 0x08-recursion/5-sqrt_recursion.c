#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of the number @n, or -1 if it doesn't have a
 * natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (my_sqrt(n, 1));
}

/**
 * my_sqrt - Helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of the number @n, or -1 if it doesn't have a
 * natural square root.
 */
int my_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (my_sqrt(n, guess + 1));
}

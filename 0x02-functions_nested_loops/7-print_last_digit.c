#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else
	{
		_putchar('0' + ((-n) % 10));
		return ((-n) % 10);
	}
}

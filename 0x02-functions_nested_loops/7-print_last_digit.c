#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n >= 0)
	{
		_putchar('0' + (ld));
		return (ld);
	}
	else
	{
		_putchar('0' + (-ld));
		return (-ld);
	}
}

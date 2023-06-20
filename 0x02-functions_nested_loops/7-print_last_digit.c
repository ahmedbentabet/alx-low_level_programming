#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int a = _abs(n);

	_putchar('0' + (a % 10));
	return (a % 10);
}

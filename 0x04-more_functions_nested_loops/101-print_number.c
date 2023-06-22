#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int m = n;

	if (m < 0)
	{
		_putchar('-');
		m = -n;
	}

	if (m >= 10)
		print_number(m / 10);

	_putchar((m % 10) + 48);
}

#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: the number of the times table
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	print_table(n);
}

/**
 * print_table - Prints the times table up to the given number.
 * @n: the number of the times table
 */
void print_table(int n)
{
	int n1, n2;

	for (n1 = 0; n1 < n + 1; n1++)
	{
		for (n2 = 0; n2 < n + 1; n2++)
		{
			int a = n1 * n2;

			print_number(a);

			if (n2 != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_number - Prints a number in the times table format.
 * @num: the number to be printed
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + num);
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar('0' + num / 10);
		_putchar('0' + num % 10);
	}
	else
	{
		_putchar('0' + num / 100);
		_putchar('0' + ((num / 10) % 10));
		_putchar('0' + num % 10);
	}
}

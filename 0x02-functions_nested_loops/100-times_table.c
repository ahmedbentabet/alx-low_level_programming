#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: the number of the times table.
 */
void print_times_table(int n)
{
	int n1, n2;

	if (n > 15 || n < 0)
		return;

	for (n1 = 0; n1 < n + 1; n1++)
	{
		for (n2 = 0; n2 < n + 1; n2++)
		{
			int a = n1 * n2;

			if (n2 == 0)
			{
				_putchar('0');
			}
			else if (a < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + a);
			}
			else if (a < 100)
			{
				_putchar(' ');
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
			}
			else
			{
				_putchar('0' + a / 100);
				_putchar('0' + ((a / 10) % 10));
				_putchar('0' + a % 10);
			}
			if (n2 != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

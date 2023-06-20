#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n1, n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 10)
	{
		while (n2 < 10)
		{
			int a = n1 * n2;
			int b = n1 * (n2 + 1);

			if (a / 10 == 0)
			{
				_putchar('0' + a);
			}
			else if (a / 10 != 0)
			{
				_putchar('0' + a / 10);
				_putchar('0' + a % 10);
			}
			if (b / 10 == 0 && n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (b / 10 != 0 && n2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			n2++;
		}
		n2 = 0;
		_putchar('\n');
		n1++;
	}
	_putchar('\n');
}

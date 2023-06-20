#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int n1, n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 24)
	{
		while (n2 < 60)
		{
			_putchar('0' + n1 / 10);
			_putchar('0' + n1 % 10);
			_putchar(':');
			_putchar('0' + n2 / 10);
			_putchar('0' + n2 % 10);
			_putchar('\n');
			n2++;
		}
		n2 = 0;
		n1++;
	}
}

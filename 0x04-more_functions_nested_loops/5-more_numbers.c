#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	/* 10 times */
	int i;

	for (i = 1; i <= 10; i++)
	{
		/* numbers from 0 to 14 */
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}

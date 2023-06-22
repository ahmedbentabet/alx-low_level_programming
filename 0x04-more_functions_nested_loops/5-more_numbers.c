#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	/* 10 times */
	for (int i = 1; i <= 10; i++)
	{
		/* numbers from 0 to 14 */
		for (int n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}

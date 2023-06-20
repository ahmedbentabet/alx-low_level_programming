#include "main.h"

/**
 * print_alphabet - Prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}

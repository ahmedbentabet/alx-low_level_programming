#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be printed
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
		str++;
	}
	_putchar('\n');
}

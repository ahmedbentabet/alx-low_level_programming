#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int length;
	int start;
	int i;

	length = _strlen(str);
	start = (length - 1) / 2;
	i = start;
	while (i < length)
	{
		putchar(str[i + 1]);
		i++;
	}
	_putchar('\n');
}

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int  length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

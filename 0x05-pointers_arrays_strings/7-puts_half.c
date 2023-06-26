#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
	int length;
	int start;
	int i, j;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		i = length / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (length % 2 != 0)
	{
		j = (length - 1) / 2;
		while (j < length - 1)
		{
			_putchar(str[j + 1]);
			j++;
		}
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

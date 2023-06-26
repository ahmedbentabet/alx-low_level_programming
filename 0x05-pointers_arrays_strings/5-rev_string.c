#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int length;

	i = 0;
	length = _strlen(s) - 1;
	while (i < length)
	{
		swap_char(s + i, s + length);
		i++;
		length--;
	}
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

/**
 * swap_char - Swaps two characters
 * @a: Pointer to the first character
 * @b: Pointer to the second character
 */
void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

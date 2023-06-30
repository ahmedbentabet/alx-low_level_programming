#include "main.h"

/**
 * string_toupper - Converts a string to uppercase
 * @s: The string to convert
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] > 'a' && s[i] < 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

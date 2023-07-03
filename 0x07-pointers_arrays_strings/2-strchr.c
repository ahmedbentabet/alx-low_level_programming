#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	if (c == '\0')
	{
		return (&s[i]);
	}

	return (NULL);
}

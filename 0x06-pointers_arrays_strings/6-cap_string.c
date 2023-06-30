#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		for (j = 0; separator[j] != '\0'; j++)
			if (s[i - 1] == separator[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= 32;
		i++;
	}
	return (s);
}

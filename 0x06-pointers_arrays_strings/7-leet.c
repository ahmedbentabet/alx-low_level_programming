#include "main.h"

/**
 * leet - Encodes a string into 1337 speak
 * @s: The string to encode
 *
 * Return: Pointer to the modified string
 */
char *leet(char *s)
{
	int i, j;
	char *d = "aAeEoOtTlL";
	char *e = "4433007711";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (d[j])
		{
			if (s[i] == d[j])
				s[i] = e[j];
			j++;
		}
		i++;
	}

	return (s);
}

#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to apply ROT13 to
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *s)
{
	int i, j;
	char d[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char e[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; d[j]; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = e[j];
				break;
			}
		}
	}
	return (s);
}

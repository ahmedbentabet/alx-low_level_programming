#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the first occurrence of a byte from accept in s,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
				break;
			}
			j++;
		}
		i++;
	}

	return (NULL);
}

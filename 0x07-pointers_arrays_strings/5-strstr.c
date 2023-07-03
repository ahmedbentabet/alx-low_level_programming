#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the first occurrence of the substring needle
 * in the string haystack, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}

		if (!needle[j])
			return (&haystack[i]);
		i++;
	}

	return (NULL);
}

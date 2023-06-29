#include "main.h"

/**
 * _strncpy - Copies a string, up to n bytes, from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

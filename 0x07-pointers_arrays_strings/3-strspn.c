#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i] != accept[i] && s[i] != '\0' && accept[i] != '\0')
	{
		i++;
	}
	return (++i);
}

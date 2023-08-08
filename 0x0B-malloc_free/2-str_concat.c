#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	new = (char *)malloc((i + j + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		new[i + j] = s2[j];
	}
	new[i + j] = '\0';
	return (new);
}

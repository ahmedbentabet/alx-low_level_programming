#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n characters from s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters to concatenate from s2
 *
 * Return: Pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int len1, len2;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; len2 < n && s2[len2]; len2++)
		;

	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
		new[j + i] = s2[j];
	new[j + i] = '\0';
	return (new);
}

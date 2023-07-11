#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *dub;

	if (str == NULL)
		return (NULL);

	dub = (char *)malloc(sizeof(str) * sizeof(char));

	for (i = 0; i < sizeof(str); i++)
	{
		dub[i] = str[i];
	}

	return (dub);
}

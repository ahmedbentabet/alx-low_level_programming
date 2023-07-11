#include "main.h"
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

	for (i = 0; str[i] != '\0'; i++)
		;
	dub = (char *)malloc((i + 1) * sizeof(char));
	if (dub == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dub[i] = str[i];
	}
	dub[i] = '\0';
	return (dub);
}

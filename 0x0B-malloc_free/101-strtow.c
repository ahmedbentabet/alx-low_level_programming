#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Checks if a character is a space, tab, or newline.
 * @c: The character to check.
 * Return: 1 if character is a space, tab, or newline, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int i, num_words = 0;

	for (i = 0; str[i] != '\0';)
	{
		while (is_space(str[i]))
			i++;
		if (str[i] != '\0')
		{
			num_words++;
			while (str[i] != '\0' && !is_space(str[i]))
				i++;
		}
	}

	char **words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	int word_index = 0;

	for (i = 0; str[i] != '\0';)
	{
		while (is_space(str[i]))
			i++;
		if (str[i] != '\0')
		{
			int start = i;

			while (str[i] != '\0' && !is_space(str[i]))
				i++;
			int word_length = i - start;

			words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (int j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], str + start, word_length);
			words[word_index][word_length] = '\0';
			word_index++;
		}
	}

	words[word_index] = NULL;
	return (words);
}

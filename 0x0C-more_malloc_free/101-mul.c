#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Result of the multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	char *str1 = argv[1];
	char *str2 = argv[2];

	for (int i = 0; str1[i] != '\0'; i++)
	{
		if (!isdigit(str1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (int i = 0; str2[i] != '\0'; i++)
	{
		if (!isdigit(str2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	int num1 = atoi(str1);
	int num2 = atoi(str2);

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

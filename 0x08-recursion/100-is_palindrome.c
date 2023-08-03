#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	if (*s != s[len - 1])
		return (0);

	return (helper_palindrome(s, 0, len - 1));
}

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * helper_palindrome - Helper function to check palindrome.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int helper_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (helper_palindrome(s, start + 1, end - 1));
}

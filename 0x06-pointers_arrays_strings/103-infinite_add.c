#include "main.h"

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_idx: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *add_strings(char *n1, char *n2, char *r, int r_idx)
{
	int digit, carry = 0;

	while (*n1 && *n2)
	{
		digit = (*n1 - '0') + (*n2 - '0');
		digit += carry;
		*(r + r_idx) = (digit % 10) + '0';
		carry = digit / 10;
		n1--;
		n2--;
		r_idx--;
	}

	while (*n1)
	{
		digit = (*n1 - '0') + carry;
		*(r + r_idx) = (digit % 10) + '0';
		carry = digit / 10;
		n1--;
		r_idx--;
	}

	while (*n2)
	{
		digit = (*n2 - '0') + carry;
		*(r + r_idx) = (digit % 10) + '0';
		carry = digit / 10;
		n2--;
		r_idx--;
	}

	if (carry && r_idx >= 0)
	{
		*(r + r_idx) = (carry % 10) + '0';
		return (r + r_idx);
	}

	else if (carry && r_idx < 0)
		return (0);

	return (r + r_idx + 1);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index = 0, n1_len = 0, n2_len = 0;

	while (*(n1 + index))
	{
		n1_len++;
		index++;
	}

	index = 0;
	while (*(n2 + index))
	{
		n2_len++;
		index++;
	}

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}

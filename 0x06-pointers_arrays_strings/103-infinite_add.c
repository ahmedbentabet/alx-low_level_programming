#include "main.h"

/**
 * add_strings - Adds two string numbers and stores the result in a buffer
 * @n1: First string number
 * @n2: Second string number
 * @r: Buffer to store the result
 * @r_idx: Starting index in the buffer to store the result
 *
 * Return: Pointer to the result in the buffer
 */
char *add_strings(char *n1, char *n2, char *r, int r_idx)
{
	int digit, carry;

	carry = 0;
	for (; *n1 && *n2; n1--, n2--, r_idx--)
	{
		digit = (*n1 - '0') + (*n2 - '0');
		digit += carry;
		*(r + r_idx) = (digit % 10) + '0';
		carry = digit / 10;
	}

	for (; *n1; n1--, r_idx--)
	{
		digit = (*n1 - '0') + carry;
		*(r + r_idx) = (digit % 10) + '0';
		carry = digit / 10;
	}

	for (; *n2; n2--, r_idx--)
	{
		digit = (*n2 - '0') + carry;
		*(r + r_idx) = (digit % 10) + '0';
		carry = digit / 10;
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
 * infinite_add - Adds two string numbers of potentially large size
 * @n1: First string number
 * @n2: Second string number
 * @r: Buffer to store the result
 * @size_r: Size of the result buffer
 *
 * Return: Pointer to the result in the buffer, or 0 on error
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;

	for (index = 0; *(n2 + index); index++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}

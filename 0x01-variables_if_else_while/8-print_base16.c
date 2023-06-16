#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 0;
	while (n < 16)
	{
		if (n < 10)
			putchar('0' + n);
		else
			putchar('a' + n - 10);
		n++;
	}
	putchar('\n');
	return (0);
}

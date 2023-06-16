#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = 1;
		while (n2 < 100)
		{
			putchar('0' + n1 / 10);
			putchar('0' + n1 % 10);
			putchar(' ');
			putchar('0' + n2 / 10);
			putchar('0' + n2 % 10);
			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;

	n1 = 48;
	while (n1 < 58)
	{
		n2 = 48;
		while (n2 < 58)
		{
			if (n1 < n2)
			{
				putchar(n1);
				putchar(n2);
				if (n1 < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}

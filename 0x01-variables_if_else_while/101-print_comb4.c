#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3;

	n1 = 48;
	while (n1 < 58)
	{
		n2 = 48;
		while (n2 < 58)
		{
			n3 = 48;
			while (n3 < 58)
			{
				if (n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}

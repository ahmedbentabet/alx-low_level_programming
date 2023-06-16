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
	int n1, n2, n3, n4;

	n1 = 48;
	while (n1 < 58)
	{
		n2 = 48;
		while (n2 < 58)
		{
			n3 = 48;
			while (n3 < 58)
			{
				n4 = 48;
				while (n4 < 58)
				{
					if (n1 * 10 + n2 < n3 * 10 + n4)
					{
						putchar(n1);
						putchar(n2);
						putchar(' ');
						putchar(n3);
						putchar(n4);
						if (n1 * 10 + n2 != 626)
						{
							putchar(',');
							putchar(' ');
						}
					}
					n4++;
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

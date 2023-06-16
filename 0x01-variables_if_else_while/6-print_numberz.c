#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: Prints all single digit numbers of base 10 starting from 0
 * without using any variable of type char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

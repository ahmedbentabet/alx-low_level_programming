#include <stdio.h>

/**
 * main - Entry point
 *
 * Descreption: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * main - A program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int generatedPassword[100];
	int index, total, temp;

	total = 0;

	srand(time(NULL));

	for (index = 0; index < 100; index++)
	{
		generatedPassword[index] = rand() % 78;
		total += (generatedPassword[index] + '0');
		_putchar(generatedPassword[index] + '0');
		if ((2772 - total) - '0' < 78)
		{
			temp = 2772 - total - '0';
			total += temp;
			_putchar(temp + '0');
			break;
		}
	}

	return (0);
}

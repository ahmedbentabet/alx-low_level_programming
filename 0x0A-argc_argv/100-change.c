#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	cents = atoi(argv[1]);
	coins = (cents / 25) + ((cents % 25) / 10) + (((cents % 25) % 10) / 5)
		+ ((((cents % 25) % 10) % 5) / 2) + ((((cents % 25) % 10) % 5) % 2);

	printf("%d\n", coins);
	return (0);
}

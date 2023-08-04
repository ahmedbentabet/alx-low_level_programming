#include "main.h"

/**
 * main - Prints all arguments it receives.
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

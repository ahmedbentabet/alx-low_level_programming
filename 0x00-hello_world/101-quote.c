#include <unistd.h>

/*
 * main - Prints a string without using puts or printf
 *
 * Return: Always 1
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, q, sizeof(q) - 1);
	return (1);
}

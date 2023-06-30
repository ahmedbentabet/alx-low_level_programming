#include "main.h"

/**
 * print_buffer - Prints the content of a buffer in a formatted manner
 * @b: Buffer to print
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
	int offset, i, j;

	offset = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (offset < size)
	{
		j = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + offset + i));
			else
				printf("  ");

			if (i % 2)
				printf(" ");
		}

		for (i = 0; i < j; i++)
		{
			int c = *(b + offset + i);

			if (c < 32 || c > 132)
				c = '.';

			printf("%c", c);
		}

		printf("\n");
		offset += 10;
	}
}

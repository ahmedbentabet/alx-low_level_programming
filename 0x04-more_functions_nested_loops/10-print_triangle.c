#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			space = size - i - 1;
			for (j = 0; j < space; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

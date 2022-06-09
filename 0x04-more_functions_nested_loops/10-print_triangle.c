#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle.
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
			_putchar(' ');

		for (j = 1; j <= i; j++)
			_putchar(35);

		if (i < size)
			_putchar('\n');
	}

	_putchar('\n');
}

#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar(92);

		if (i < n - 1)
			_putchar('\n');
	}

	_putchar('\n');
}

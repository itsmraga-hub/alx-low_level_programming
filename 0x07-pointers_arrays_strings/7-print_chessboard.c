#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: char
*
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	j = 0;
	i = 0;

	while (i < 64)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - j]);
		i++;
	}

	_putchar('\n');
}

#include "main.h"

/**
* print_line - a function that draws a straight line in the terminal
* @n: number of times
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}

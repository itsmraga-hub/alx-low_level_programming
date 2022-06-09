#include "main.h"

/**
* print_number - function to print numbers
* @n: number to print
*/

void print_number(int n)
{
	unsigned int m, d, i;

	if (n < 0)
	{
		_putchar(45);
		m = -n;
	}
	else
		m = n;

	d = m;
	i = 1;

	while (d > 9)
	{
		d /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
		_putchar(((m / i) % 10) + 48);
}

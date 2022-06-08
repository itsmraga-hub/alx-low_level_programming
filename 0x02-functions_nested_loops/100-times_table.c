#include "main.h"

/**
* print_times_table - prints n times table
* @n: integer
*
* Return: (0)
*/

void print_times_table(int n)
{
	int i, j, multiple;

	if (n == 0 || n > 15)
	{
		_putchar('0');
		_putchar('\n');
	}

	if (n > 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				multiple = i * j;

				if (multiple <= n)
					_putchar(' ');
				else
					_putchar((multiple / 10) + '0');

				_putchar((multiple % 10) + '0');
			}

				_putchar('\n');
		}
	}
}

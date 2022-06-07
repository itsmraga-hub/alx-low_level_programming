#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: (0)
*/

void times_table(void)
{
	int i, j, multiple;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			multiple = i * j;
			_putchar(multiple);
			_putchar(',');
			_putchar(' ');
		}
			_putchar('\n');
	}
}

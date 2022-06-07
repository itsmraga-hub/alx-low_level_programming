#include "main.h"

/**
* print_alphabet - A function that prints alphabet a to z
*
* Return: (0)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

#include "main.h"

/**
* puts2 - prints every other character of the string
* @str: string to print
* Return: void
*/

void puts2(char *str)
{
	int c;

	c = 0;

	for (; str[c] != '\0'; c++)
	{
		if (str[c] % 2 == 0)
			_putchar(str[c]);
	}

	_putchar('\n');
}

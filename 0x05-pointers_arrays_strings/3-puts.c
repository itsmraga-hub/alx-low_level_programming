#include "main.h"

/**
* _puts - prints a string, followed by a new line
* @str: string to print out
* Return: void
*/

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{

		_putchar(str[count]);
		len++;
	}

	_putchar('\n');
}

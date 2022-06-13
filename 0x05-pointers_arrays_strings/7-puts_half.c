#include "main.h"

/**
* puts_half - prints half of a string
* @str: string to print half of
* Return: void
*/

void puts_half(char *str)
{
	int i, j, len;

	len = 0;

	for (; str[i] != '\0'; i++)
		len++;

	if (len % 2 == 0)
		j = len / 2;
	else
		j = ((len - 1) / 2) + 1;

	for (; j < len; j++)
		_putchar(str[j]);

	_putchar('\n');
}

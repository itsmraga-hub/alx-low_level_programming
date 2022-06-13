#include "main.h"

/**
* puts_half - prints half of a string
* @str: string to print half of
* Return: void
*/

void puts_half(char *str)
{
	int j, len;

	len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}

	if (len % 2 == 1)
		j = len / 2;
	else
		j = (len - 1) / 2;

	for (++j; j < len; j++)
		_putchar(str[j]);

	_putchar('\n');
}

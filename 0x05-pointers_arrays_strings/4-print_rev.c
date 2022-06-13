#include "main.h"

/**
* print_rev - function that prints a string in reverse.
* @s: string to print in reverse.
* Return: void
*/

void print_rev(char *s)
{
	int len, i, j;

	len = 0;

	for (i = 0; s[i] != '\0'; ++i)
		len++;

	for (j = len; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}

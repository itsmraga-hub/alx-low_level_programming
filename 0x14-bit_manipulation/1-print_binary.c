#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _div - divides
* @n: number
* Return: void
*/

void _div(unsigned long int n)
{
	if (n < 1)
		return;

	_div(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
* print_binary - Prints a binary number
* @n: number in decimal form
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		_div(n);
}

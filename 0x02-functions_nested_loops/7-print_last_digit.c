#include "main.h"

/**
* print_last_digit - function that returns te last digit of a number.
* @n: the integer to print the last digit of
*
* Return: (n)
*/
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar(last + '0');

	return (last);
}

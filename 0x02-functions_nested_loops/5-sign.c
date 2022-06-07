#include "main.h"

/**
* print_sign - function to print sign of the number
* @n: integer to print sign of
*
* Return: (1) if greater than 0, (0) if zero and (-1) if less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}

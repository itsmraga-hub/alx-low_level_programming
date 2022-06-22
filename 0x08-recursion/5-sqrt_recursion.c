#include "main.h"

/**
* find_power - Returns the power of a number
* @n: Number
* @i: iteration
*
* Return: sqrt
*/

int find_power(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (8 * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + find_power(n, i + 1));
}

/**
* _sqrt_recursion - Returns the natural sqrt of a number
* @n: Number
*
* Return: sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1)
	return (find_power(n, 2));
}

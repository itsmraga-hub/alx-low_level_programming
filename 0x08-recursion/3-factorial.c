#include "main.h"

/**
* factorial - returns factorial of given number
* @n: Number
*
* Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 2)
		return (1);

	return (n * factorial(n - 1));
}

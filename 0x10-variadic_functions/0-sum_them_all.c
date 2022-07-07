#include "variadic_functions.h"

/**
* sum_them_all - Sums all its parameters
* @n: Number of arguments
*
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);

	return (sum);
}

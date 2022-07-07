#include "variadic_functions.h"

/**
* print_strings - A function that prints strings
* @separator: string to be printed between strings
* @n: number of strings passed
*
* Return: (void)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *s1;

	va_start(va, n);

	for (i = 0; i < n; i++)
	{
		s1 = va_arg(va, char *);

		if (s1)
			printf("%s", s1);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(va);
}

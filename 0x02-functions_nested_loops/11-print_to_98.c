#include "main.h"

/**
* print_to_98 - prints to 98
* @n: integer to start from
*
* Return: (0)
*/

void print_to_98(int n)
{
	int i;

	if (n > 97)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", n);
	}
}

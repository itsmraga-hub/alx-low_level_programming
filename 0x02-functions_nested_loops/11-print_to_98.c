#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints to 98
* @n: integer to start from
*
* Return: (0)
*/

void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", i);
	}
}

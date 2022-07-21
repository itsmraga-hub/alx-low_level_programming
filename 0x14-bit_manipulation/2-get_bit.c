#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* get_bit - Value of bit at index
* @n: number
* @index: index to find
*
* Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0;

	while (n)
	{
		if (c == index)
		{
			if (n % 2 == 1)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		c++;
	}

	if (index > c && index < 63)
		return (0);
	
	return (-1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* clear_bit - sets value to 0
* @n: number
* @index: index
*
* Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n & (~(1 < index));
		return (1);
	}

	return (-1);
}

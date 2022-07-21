#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_bit - sets
* @n: number
* @index: index
*
* Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if (*n |= 1 << index)
		return (1);
	
	return (-1);
}

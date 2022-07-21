#include "stdlib.h"
#include "main.h"

/**
* flip_bits - flips
* @n: number
* @m: m
*
* Return: int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mint = 0, count = 0;

	mint = n ^ m;

	while(mint)
	{
		if (mint & 1)
			count++;

		mint >>= 1;
	}

	return (count);
}

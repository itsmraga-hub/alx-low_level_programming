#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sums of two diagonals
* @a: input pointer
* @size: size of the square
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, firstSum, sum;

	firstSum = 0;
	sum = 0;
	i = 0;

	for (; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			firstSum += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum += *(a + i);
	}

	printf("%d, %d\n", firstSum, sum);
}

#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for value in array of integers
 *
 * @array: input array
 * @size: size of array
 * @value: value to search for
 * Return: index of number
 */

int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

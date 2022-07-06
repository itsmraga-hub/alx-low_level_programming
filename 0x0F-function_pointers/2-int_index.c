#include "function_pointers.h"

/**
* int_index - A function that searches for an integer
* @array: array to search from
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
*
* Return: index if found, -1 if no element and if size < 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		};
	}

	return (-1);
}

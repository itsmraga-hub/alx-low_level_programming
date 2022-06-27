#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of chars and
* initializes it with a specific char
* @size: size of array
* @c: char to initialize with
*
* Return: Pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

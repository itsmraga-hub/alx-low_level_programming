#include "main.h"
#include <stdlib.h>

/**
* *_calloc - allocates array memory
* @nmemb: number of elements
* @size: size of bytes
*
* Return: pointer to array or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}

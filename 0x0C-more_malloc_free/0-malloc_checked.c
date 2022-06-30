#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - Allocates memory using malloc
* @b: memory to allocate
*
* Return: void
*/

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}

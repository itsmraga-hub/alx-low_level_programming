#include "main.h"

/**
* *_memset - fills the first n bytes of the memory area pointed to by s
* @s: string
* @b: constant byte
* @n: number of first n bytes
*
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

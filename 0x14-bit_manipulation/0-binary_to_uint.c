#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_to_uint - converts binary number to unsigned int
* @b: string of 1 and 0's
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, len = 0, c = 0;

	len = _strlen(b);

	if (b == NULL)
		return (0);

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);
		if (b[len] == 49)
			uint += 1 << c;

		c++;
	}

	return (uint);
}

/**
* _strlen - returns lenth of a string
* @s: string
*
* Return: len
*/

int _strlen(const char *s)
{
	int strlen = 0,i = 0;
	while (s[i])
	{
		strlen++;
		i++;
	}
	return (strlen);
}

#include "main.h"

/**
* _strncat - concatanates two string.
* @dest: destination
* @src: source
* @n: amount of bytes used from src
* Return: the pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, count;

	j = 0;
	count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		j++;

	while (count < n)
	{
		*(dest + j) = *(src + count);

		if (*(src + count) == '\0')
			break
;
		j++;
		count++;
	}

	return (dest);
}

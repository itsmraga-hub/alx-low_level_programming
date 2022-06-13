#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: string to find the length of
* Return: string length
*/

int _strlen(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}

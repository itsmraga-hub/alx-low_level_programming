#include "main.h"

/**
* _strchr - locates a character in a string.
* @s: string to check in
* @c: character to find in s
*
* Return: pointer to occurence of first c
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);

		i++;
	}
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}

#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @s: input string
* Return: pointer to dest
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}

	return (s);
}

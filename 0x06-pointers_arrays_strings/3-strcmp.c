#include "main.h"

/**
* _strcmp - String comparison
* @s1: first string
* @s2: second string
*
* Return: 0 if s1 and s2 are equal
*/

int _strcmp(char *s1, char *s2)
{
	int i, o;

	while (o == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;

		o = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (o);
}

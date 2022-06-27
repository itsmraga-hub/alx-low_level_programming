#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatanates two strings
* @s1: first string
* @s2: second string
*
* Return: NULL or pointer to concatanated string
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len;

	if (s2 == NULL || s1 == NULL)
	{
		if (s2 == NULL)
			s2 = "";
		else if (s1 == NULL)
			s1 = "";
	}

	i = 0;
	for (; i != '\0'; i++)
		len++;

	for (i = 0; i != '\0'; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1));

	j = 0;
	i = 0;
	while (*(s1 + j) != '\0')
	{
		str[i] = *(s1 + j);
		j++;
		i++;
	}

	j = 0;
	while (*(s2 + j) != '\0')
	{
		str[i] = *(s2 + j);
		j++;
		i++;
	}
	str[i] = '\0';

	return (str);
}

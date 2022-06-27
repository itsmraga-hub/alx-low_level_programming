#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space
* @str: string to copy
*
* Return: NULL or pointer to copy of str
*/

char *_strdup(char *str)
{
	char *s;
	int i = 0, len;

	for (i = 0; i != '\0'; i++)
		len++;

	s = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		s[i] = *(str + i);
		i++;
	}

	*(s + i) = '\0';
	return (s);
}

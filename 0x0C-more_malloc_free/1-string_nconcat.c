#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - concatanates two strings
* @s1: string 1
* @s2: string 2
* @n: bytes of str 2 to concatanate to string 1
*
* Return: pointer to concatanated string or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lens1 = 0, lens2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		lens1++;

	for (i = 0; s2[i] != '\0'; i++)
		lens2++;

	if (n > lens2)
		n = lens2;

	j = lens1 + n + 1;
	str = malloc(j);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];

	str[i++] = '\0';

	return (str);
}

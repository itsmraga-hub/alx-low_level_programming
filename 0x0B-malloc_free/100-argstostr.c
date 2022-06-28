#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatanates all arguments
* @ac: number of arguments
* @av: string to concatanate at
*
* Return: concatanated string or NULL
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, l;

	if (ac == 0)
		return (NULL);
	i = 0;
	len = 0;
	for (; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	l = 0;
	for (; l < len; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			str[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < len - 1)
			str[l] = av[i][j];
	}
	str[l] = '\0';
	return (str);
}

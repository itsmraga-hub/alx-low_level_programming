#include "main.h"

/**
* leet - Encodes a string into 1337
* @s: String to encode
*
* Return: (s) the encoded string
*/

char *leet(char *s)
{
	int i, j, len;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	j = 0;
	len = 5;

	while (s[i])
	{
		j = 0;

		while (j < len)
		{
			if (s[i] == r[j] || s[i] - 32 == r[j])
			{
				s[i] = n[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}

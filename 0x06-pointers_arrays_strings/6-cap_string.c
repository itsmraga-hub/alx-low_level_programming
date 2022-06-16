#include "main.h"

/**
* cap_string - Capitalizes all characters of a string
* @s: string to capitalize
*
* Return: (s) Capitalized String
*/

char *cap_string(char *s)
{
	int a, i, c;
	char sp[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	a = 0;

	while (s[a])
	{
		i = 0;

		while (i < sp)
		{
			if ((a == 0 || s[a - 1] == sp[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}

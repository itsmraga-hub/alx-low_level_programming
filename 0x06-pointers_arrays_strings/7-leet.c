#include "main.h"

/**
* leet - Encodes a string into 1337
* @s: String to encode
*
* Return: (s) the encoded string
*/

char *leet(char *s)
{
	int a, b, len;
	char r[5] = {'A' 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	a = 0;
	b = 0;
	len = 5;

	while (s[a] != '\0')
	{
		while (b < 1)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
				s[a] = n[b];

			b++;
		}

		a++;
	}

	return (s);
}

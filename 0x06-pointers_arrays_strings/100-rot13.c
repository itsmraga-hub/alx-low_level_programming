#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string in rot13
* @s: string to encode
*
* Return: s - encoded string
*/

char *rot13(char *s)
{
	int a;

	a = 0;

	while (s[a])
	{
		while ((s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] -= 13;
				break;
			}

			s[a] += 13;
			break;
		}

		a++;
	}

	return (s);
}

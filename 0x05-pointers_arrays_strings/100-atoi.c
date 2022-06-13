#include "main.h"

/**
* _atoi - function
* @s: string
* Return: int or (0)
*/

int _atoi(char *s)
{
	unsigned int c, s, oi pn, m, i;

	c = 0;
	s = 0;
	oi = 0;
	pn = 0;
	m = 1;

	while (*(s + c) != '\0')
	{
		if ((*(s + c) < '0' || *(s + c) > '9') && s > 0)
			break;

		if (*(s + c) == '-')
			pn *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (s > 0)
				m *= 10;
			s++;
		}
		c++;
	}

	for (i = c - s; i < c; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}

	return (oi * pn);
}

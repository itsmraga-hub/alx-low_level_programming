#include "main.h"

/**
* _atoi - function
* @s: string
* Return: int or (0)
*/

int _atoi(char *s)
{
	unsigned int c, size, oi, pn, m, i;

	c = 0;
	size = 0;
	oi = 0;
	pn = 0;
	m = 1;

	while (*(size + c) != '\0')
	{
		if ((*(size + c) < '0' || *(size + c) > '9') && size > 0)
			break;

		if (*(size + c) == '-')
			pn *= -1;

		if ((*(size + c) >= '0') && (*(size + c) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		c++;
	}

	for (i = c - size; i < c; i++)
	{
		oi = oi + ((*(size + i) - 48) * m);
		m /= 10;
	}

	return (oi * pn);
}

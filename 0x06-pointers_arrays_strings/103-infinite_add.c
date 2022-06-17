#include "main.h"
#include <stdio.h>

/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer that the function will use to store the result.
* @size_r: size of the buffer.
* Return: pointer to dest
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c = 0, d = 0, t, bigger, e, f, sum = 0;

	while (*(n1 + c) != '\0')
		c++;
	while (*(n2 + d) != '\0')
		d++;
	if (c >= d)
		bigger = c;
	else
		bigger = d;
	if (size_r <= bigger + 1)
		return (0);
	r[bigger + 1] = '\0';
	c--, d--, size_r--;
	e = *(n1 + c) - 48, f = *(n2 + d) - 48;
	while (bigger >= 0)
	{
		t = e + f + sum;
		if (t >= 10)
			sum = t / 10;
		else
			sum = 0;
		if (t > 0)
			*(r + bigger) = (t % 10) - 48;
		else
			*(r + bigger) = '0';
		if (c > 0)
			c--, e = *(n1 + c) - 48;
		else
			e = 0;
		if (d > 0)
			d--, f = *(n2 + d) - 48;
		else
			f = 0;
		bigger--, size_r--;
	}
	if (*r == '0')
		return (r + 1);
	else
		return (r);
}

#include "main.h"

/**
* _atoi - function
* @s: string
* Return: int or (0)
*/

int _atoi(char *s)
{
	int sign, resp, num, i;

	sign = 1;
	resp = 0;

	for ((num = 0; !(s[num] >= 48 && s[num] <= 57); num++))
	{
		if (s[num] == '-')
			sign *= -1;
	}

	for (i = num; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += s[i] - 48;
	}

	return (sign * resp);
}

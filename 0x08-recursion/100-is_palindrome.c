#include "main.h"

/**
* _strlen - returns the length of s string
* @s: string to find length of
*
* Return: length of string - len
*/

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
		len++;

	return (len);
}
/**
* check - checks if palindrome
* @s: string
* @i: iterator
* @len: length of string
* Return: (1) or (0)
*/

void check(char *s, int i, int len)
{
	if (s[i] == s[len])
	{
		if (i + 1 == len || i == len)
			return (1);

		check(*s, i + 1);
	}
	return (0);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: string to check
*
* Return: (1) - True or (0) - False
*/

int is_palindrome(char *s)
{
	int len = _strlen(char *s) - (i + 1);
	int i = 0;

	return (check(s, len, i));
}

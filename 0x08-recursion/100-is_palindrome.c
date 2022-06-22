#include "main.h"

/**
* _strlen - returns the length of s string
* @s: string to find length of
*
* Return: length of string - len
*/

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));

	return (0);
}
/**
* check - checks if palindrome
* @s: string
* @i: iterator
* @len: length of string
* Return: (1) or (0)
*/

int check(char *s, int i, int len)
{
	if (i < len && s[i] == s[len])
		return (check(s, i + 1, len - 1));

	if (s[i] != s[len])
		return (0);

	return (1);
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: string to check
*
* Return: (1) - True or (0) - False
*/

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s) - 1;

	return (check(s, i, len));
}

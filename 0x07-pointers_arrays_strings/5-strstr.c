#include "main.h"

/**
* _strstr - finds first occurence of the smaller string
* @haystack: full string
* @needle: smaller string to find
*
* Return: pointer to beginning of located string
*/

char *_strstr(char *haystack, char *needle)
{
	char *stack, *sneedle;

	while (*haystack != '\0')
	{
		stack = haystack;
		sneedle = needle;

		while (*haystack != '\0' && sneedle != '\0' && *haystack == *sneedle)
		{
			haystack++;
			sneedle++;
		}

		if (!*sneedle)
			return (stack);

		haystack = stack + 1;
	}

	return (0);
}

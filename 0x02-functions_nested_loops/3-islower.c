#include "main.h"

/**
* _islower - checks lowercase
* @c: character to check if lower.
*
* Return: 1 - if c is lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

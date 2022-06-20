#include "main.h"

/**
* set_string - sets the value of a pointer to char
* @s: source address
* @to: target address
*
* Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}

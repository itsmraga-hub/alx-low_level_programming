#include "main.h"
#include <unistd.h>

/**
* _putchar - writes a char to the terminal
* @c: character to write
* Return: (1) - success
* On error, -1 is returned.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

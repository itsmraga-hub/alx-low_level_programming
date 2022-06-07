#include "main.h"
#include <unistd.h>

/**
* _putchar - writes a char to the terminal
* @c: char to print
*
* Return: (1) - success
* On error, -1 returned, and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

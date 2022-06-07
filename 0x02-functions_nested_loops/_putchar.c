#include <unistd.h>
#include "main.h"
/**
* _putchar - writes a char to the terminal
* @c: char to print
*
* Return: (1) - success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

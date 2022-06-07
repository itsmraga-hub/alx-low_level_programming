#include "main.h"
#include <stdio.h>

/**
* main - A program that printf putchar, followed by a new line
*
* Return: (0) for success.
*/
int main(void)
{
	int i;
	char sen[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(sen[i]);
	}

	_putchar('\n');

	return (0);
}

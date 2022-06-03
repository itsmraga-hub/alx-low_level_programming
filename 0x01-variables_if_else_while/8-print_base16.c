#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 success
 */

int main(void)
{
	int i;
	char hexa[16] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
		putchar(hexa[i]);

	putchar('\n');

	return (0);
}

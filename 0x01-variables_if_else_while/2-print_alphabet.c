#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: (0) success
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar("\n");
	return (0);
}

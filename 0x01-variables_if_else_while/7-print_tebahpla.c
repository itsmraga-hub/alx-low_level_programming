#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 success
 */
int main(void)
{
	for (int i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
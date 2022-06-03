#include <stdio.h>

/**
 * main -function definition
 *
 * Return: (0) success
 */

int main(void)
{
	int i, a;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}

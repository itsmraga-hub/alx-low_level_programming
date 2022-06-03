#include <stdio.h>

/**
 * main -function definition
 *
 * Return: (0) success
 */

int main(void)
{
	for (int i = 'a'; i <= 'z'; i++)
		putchar(i);

	for (int a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}

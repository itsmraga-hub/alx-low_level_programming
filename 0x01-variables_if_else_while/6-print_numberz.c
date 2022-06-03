#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	char numbers[10] = "0123456789";

	for (i = 0; i < 10; i++)
		putchar(numbers[i]);

	putchar('\n');

	return (0);
}

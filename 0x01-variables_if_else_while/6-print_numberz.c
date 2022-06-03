#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 success
 */
int main(void)
{
	char numbers[10] = "0123456789";

	for (int i = 0; i < 10; i++)
		putchar(numbers[i]);

	putchar('\n');

	return (0);
}

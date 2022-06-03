#include <stdio.h>

/**
 * main - prints possible combinations of single digit numbers
 *
 * Return: (0) success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{

		if (i != 57)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
		else
			putchar(i);
	}

	putchar('\n');

	return (0);
}

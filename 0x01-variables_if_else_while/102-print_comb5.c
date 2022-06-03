#include <stdio.h>

/**
 * main - program that prints all possible combinations of two digit numbers
 *
 * Return: (0) for success
 */
int main(void)
{
	int i, j, k, l, first, second;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					first = (i * 10) + j;
					second = (k * 10) + l;

					if (first < second)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i == 57 && j == 56 && k == 57 && l == 57)
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

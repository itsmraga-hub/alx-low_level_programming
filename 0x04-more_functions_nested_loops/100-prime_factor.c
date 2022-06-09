#include <stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: (0)
*/

int main(void)
{
	unsigned  long int number = 612852475143;

	unsigned long int divisor = 2, largest;

	while (number != 0)
	{
		if (number % divisor != 0)
			divisor++;

		else
		{
			largest = number;
			number /= divisor;

			if (number == 1)
			{
				printf("%lu\n", largest);
				break;
			}
		}

	}

	return (0);
}

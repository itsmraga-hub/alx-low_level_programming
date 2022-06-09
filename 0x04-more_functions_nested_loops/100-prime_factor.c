#include <stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
*
* Return: (0)
*/

int main(void)
{
	long long int number = 612852475143;

	long long int divisor = 2, ans = 0, largest;

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
				printf("%lld\n", largest);
				break;
			}
		}

	}

	return (0);
}

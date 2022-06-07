#include <stdio.h>

/**
* main- main function
*
* Return: (0) success
*/

int main(void)
{
	int product;
	int i;

	product = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			product += i;
		}
	}

	printf("%d\n", product);
	return (0);
}

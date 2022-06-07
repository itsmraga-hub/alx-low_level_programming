#include <stdio.h>

/**
* main - main function
*
* Return: (0) success
*/

int main(void)
{
	unsigned long int first = 0;
	unsigned long int second = 1;
	unsigned long int nex;
	int i;

	for (i = 0; i < 50; i++)
	{
		next = first + second;
		if (i == 49)
		{
			printf("%lu", next);
			break;
		}
		printf("%lu, ", next);
		first = second;
		second = next;

	}
	putchar('\n');
	return (0);
}

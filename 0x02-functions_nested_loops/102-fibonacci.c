#include <stdio.h>

/**
* main - main function
*
* Return: (0) success
*/

int main(void)
{
	int first = 0;
	int second = 1;
	int next, i;

	for (i = 0; i < 50; i++)
	{
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;

	}
	putchar('\n');
	return (0);
}

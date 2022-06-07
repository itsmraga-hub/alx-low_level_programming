#include <stdio.h>

/**
* main - main function
*
* Return: (0)
*/

int main(void)
{
	unsigned long int f, s, next;
	int i;

	f = 1;
	s = 2;

	printf("%d, %d ", f, s);

	for (i = 2; i < 99; i++)
	{
		next = f + s;
		if (i == 98)
		{
			printf("%lu\n", next);
			break;
		}
		printf("%lu, ", next);
		f = s;
		s = next;
	}

	return (0);
}

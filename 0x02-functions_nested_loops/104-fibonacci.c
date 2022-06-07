#include <stdio.h>

/**
* main - main function
*
* Return: (0)
*/

int main(void)
{
	int i, f, s, next;

	f = 1;
	s = 2;

	printf("%d, %d ", f, s);

	for (i = 2; i < 99; i++)
	{
		next = f + s;
		if (i == 98)
		{
			printf("%d\n", next);
			break;
		}
		printf("%d, ", next);
		f = s;
		s = next;
	}

	return (0);
}

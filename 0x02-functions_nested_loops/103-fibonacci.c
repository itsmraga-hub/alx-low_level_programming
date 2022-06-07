#include <stdio.h>

/**
* main - main
*
* Return: (0)
*/

int main(void)
{
	int f, s, next, sum;

	f = 0;
	s = 1;
	sum = 0;

	while (sum <= 4000000)
	{
		next = f + s;
		/* printf("%d", next); */
		if (next % 2 == 0)
			sum  += next;

		f = s;
		s = next;
	}
	printf("%d\n", sum);
	return (0);
}

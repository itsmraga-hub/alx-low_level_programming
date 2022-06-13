#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
* main - main function
* Return: (0) success.
*/

int main(void)
{
	int i, j;
	time_t t;

	i = 0;
	j = 0;

	srand((unsigned) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if (j + i > 2772)
			break;

		j += i;
		printf("%c", i);
	}

	printf("%c\n", 2772 - j);
	return (0);
}

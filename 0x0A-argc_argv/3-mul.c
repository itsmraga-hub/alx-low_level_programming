#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments passed to function
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

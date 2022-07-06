#include "3-calc.h"

/**
* main - code checker/runner tester for calc.h
* @argc: arguments number
* @argv: array of arguments
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operand)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operand = get_op_func(argv[2]);

	if (operand == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", operand(num1, num2));

	return (0);
}

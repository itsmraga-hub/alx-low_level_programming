#include <stdio.h>

/**
 * main - function definition
 *
 * Return: (0) success
 */
int main(void)
{
	char sen[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		if (sen[i] != 'q' && sen[i] != 'e')
			putchar(sen[i]);
	}
	putchar('\n');

	return (0);
}

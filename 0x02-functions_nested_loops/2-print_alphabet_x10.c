#include "main.h"

/**
* print_alphabet_x10 - print a to z 10 times.
*
*/

void print_alphabet_x10(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(letters[j]);
		}
		_putchar('\n');
	}
}

#include <stdio.h>
#include <unistd.h>

/**
* main - function
*
* Return: (1) success
*/
int main(void)
{
	char sen[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, sen, 59);
	return (1);
}

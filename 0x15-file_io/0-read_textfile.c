#include "main.h"

/**
* read_textfile - Funcion that reads text from a file
* @filename: source
* @letters: Number of letters to read and print
*
* Return: 0 or fd
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;

	char *b = malloc(sizeof(char *) * letters);

	if (b == NULL)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	r = read(fd, b, letters);
	write(STDOUT_FILENO, b, r);

	free(b);
	close(fd);
	return (r);
}

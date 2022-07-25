#include <stdio.h>
#include "main.h"

/**
* main - main function
* @argc: Args count
* @argv: Args vector
*
* Return: 0
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
* copy_file - copies a file
* @src: source
* @dest: destination
*
* Return: void
*/

void copy_file(const char *src, const char *dest)
{
	int fd, tfd, r;
	char b[1024];

	fd = open(src, O_RDONLY);
	if (!src || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r = read(fd, b, r) != r || tfd == -1))
	{
		if (write(tfd, b, r) != r || tfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(tfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tfd);
		exit(100);
	}
}

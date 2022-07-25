#include "main.h"

/**
* _strlen - length
* @s: string
*
* Return: length
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
* create_file - Creates a file and writes content to it
* @filename: file to create
* @text_content: text to write to file
*
* Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

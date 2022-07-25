#include <stdio.h>
#include "main.h"

/**
* _strlen - len
* @s: string
*
* Return: len
*/

int _strlen(char *s)
{
	int len;

	while (s[len])
		len++;

	return (len);
}

/**
* append_text_to_file - appends text to a file
* @filename: file
* @text_content: text
*
* Return: 1 or 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);
	}

	close(fd);
	return (1);
}

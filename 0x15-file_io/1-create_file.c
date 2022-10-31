#include "main.h"

/**
  *create_file - creates a file
  *@filename: name of file to create
  *@text_content: strings to write
  *
  *Return: 1 on success or -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC | 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

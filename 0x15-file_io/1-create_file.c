#include "main.h"

/**
  *_strlen - finds strlen
  *@s: the string
  *
  *Return: string lenght
  */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
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
		w = write(fd, text_content, _strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

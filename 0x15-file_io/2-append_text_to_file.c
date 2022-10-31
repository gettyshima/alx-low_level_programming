#include "main.h"

/**
  *append_text_to_file - appends text to the end of a file
  *@filename: name of the file
  *@text_content: string to be added
  *
  *Return: 1 on success or -1 om failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_APPEND);
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

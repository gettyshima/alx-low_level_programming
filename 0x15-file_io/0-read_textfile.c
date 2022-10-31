#include "main.h"

/**
  *read_textfile - reads a file and prints ot to posix stdout.
  *@filename: name of the file
  *@letters: number of letters it shoild read and print
  *
  *Return: number of letters it could print
  *or 0 if file cannot br opened and read
  *or 0 if filename is NULL
  *or 0 if weite fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_count, w_count;
	int file_d;
	char *buf;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	r_count = read(file_d, buf, letters);
	if (r_count == -1)
		return (0);
	w_count = write(STDOUT_FILENO, buf, r_count);
	if (w_count == -1 || r_count != w_count)
		return (0);
	free(buf);
	close(file_d);
	return (w_count);
}

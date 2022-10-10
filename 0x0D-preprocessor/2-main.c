#include <stdio.h>

/**
  *main - entry point
  *prints name of file it was compiled from followed by newline
  *
  *Return: 0 success
  */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

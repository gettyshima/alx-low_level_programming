#include <stdio.h>

/**
  *main - A program that prints its name
  *@argc: counts of argument
  *@argv: the arguments
  *
  *Return: 0 (success)
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

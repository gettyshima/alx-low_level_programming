#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *main - entry point
  *prints opcode of the main
  *@argc: number of argument
  *@argv: the argument
  *
  *Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int byte,  i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (i = 0; i < byte - 1; i++)
		printf("%02hhx ", ptr[i]);
	printf("%02hhx\n", ptr[i]);
	return (0);
}

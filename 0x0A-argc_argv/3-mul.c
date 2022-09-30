#include <stdio.h>
#include <stdlib.h>

/**
  *main - multiply two numbers
  *@argc: counts of argument
  *@argv: the arguments
  *
  *Return: Error if less than two argument is passed
  */

int main(int argc, char *argv[])
{
	long int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", mul);

	return (0);
}

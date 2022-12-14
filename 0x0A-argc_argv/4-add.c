#include <stdio.h>
#include <stdlib.h>

/**
  *main - add positive numbers
  *@argc: argument count
  *@argv: argument passed
  *
  *Return: if number contains symbols other than digits
  *if no argument is passed, print 0;
  */

int main(int argc, char *argv[])
{
	long int sum = 0;
	int i, j;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j]  >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%ld\n", sum);
	return (0);
}

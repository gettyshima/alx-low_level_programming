#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int real_mul(un
int main (int argc, char *argv[])
{
	unsigned  long int num1, num2, mul;
	int i, j;

	if (argc < 2 || argc > 4)
	{
		printf("Error\n");
		exit (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j]  >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				exit (98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 + num2;

	printf("%lu\n", mul);
	return (0);
}
	

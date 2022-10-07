#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *print_error - prints error
  *Return: nothing
  */
void print_error(void)
{
	char *s = "Error\n";
	int i;

	for (i = 0; i != '\0'; i++)
		_putchar(*(s + i));
}

/**
  *main _ multiplies teo numbers
  *@argc: number of argument
  *@argv: atgument passed
  *
  *Return: 0 success
  */
int main (int argc, char *argv[])
{
	unsigned  long int num1, num2, mul;
	int i, j;
	char c[] = "Error\n";

	if (argc < 2 || argc > 3)
	{
		for (i = 0; i != '\0'; i++)
			_putchar (c[i]);
		exit (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j]  >= '0' && argv[i][j] <= '9'))
			{
				for (i = 0; i != '\0'; i++)
					_putchar (c[i]);
				exit (98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%lu\n", mul);
	return (0);
}
	

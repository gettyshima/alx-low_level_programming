#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>

/**
  *main - entry point
  *prints the result of operation followed by newline
  *@argc: number of arguments
  *@argv: arguments
  *
  *Return: 98 if wrong argument is passed
  *99 if the operator is not the correct type
  *100 if user tries to / or % by 0
  */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));

	return (0);
}

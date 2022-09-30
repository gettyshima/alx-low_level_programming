#include <stdio.h>

/**
  *main - A program that prints the number of arguments passed
  *@argc: counts of argument
  *@argv: the arguments
  *
  *Return: 0 (success)
  */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n",argc - 1);

	return (0);
}

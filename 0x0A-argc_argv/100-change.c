#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints minimum number of coin to make change
  *for a given amount of money
  *@argc: counts of argument
  *@argv: the arguments
  *
  *Return: 0 (success)
  */

int main(int argc, char *argv[])
{
	int money;
	int count = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else if (money >= 1)
			money -= 1;
		count += 1;
	}
	printf("%d\n", count);
	return (0);
}


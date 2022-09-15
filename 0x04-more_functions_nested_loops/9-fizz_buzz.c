#include <stdio.h>
#include "main.h"

/**
  *main - function block
  *Description: prints numbers from 1 to 100, but for multiples of 3
  *print fizz, and print buzz for multiples of 5
  *for both print fizzbuzz
  *
  *Return: 0 (siccess)
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && (i % 3 != 0 ))
			printf("Buzz ");
		else if (i % 3 == 0 && (i % 5 != 0))
			printf("Fizz ");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}


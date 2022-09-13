#include "main.h"
#include <stdio.h>
/**
  *main - find and add all even value of fabanacci numbers
  *that do not exceed 4000000
  *
  *Return: 0 (success)
  */
int main(void)
{
	long int i = 0, j = 1, add, sum = 0;

	while (add < 4000000)
	{
		if (add % 2 == 0)
			sum = sum + add;
		add = i + j;
		i = j;
		j = add;
	}
	printf("%lu\n", sum);
	return (0);
}

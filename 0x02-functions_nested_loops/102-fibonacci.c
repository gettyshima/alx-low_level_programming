#include "main.h"
#include <stdio.h>
/**
  *main - prints the first 50 fibonnacci numbers starting with 1 and 2
  *
  *Return: 0 (success)
  */
int main(void)
{
	int n;
	long int i = 0, j = 1, add;

	for (n = 1; n <= 50; n++)
	{
		add = i + j;
		i = j;
		j = add;
		if (n == 50)
			printf("%lu\n" add);
		else
			printf("%lu, ", add);
	}
	return (0);
}

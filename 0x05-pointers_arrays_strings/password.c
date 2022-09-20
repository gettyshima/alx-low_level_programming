#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  *main - generates valid random passwords for the program 101-crackme
  *
  *Return: 0 (success)
  */

int main(void)
{
	int i;
	char random_val[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWZYZ!@#$%^=-&*(_)\"\\|.,";
	char n;

	srand(time(NULL));
	for (i = 0; i <= 9; i++)
	{
		n = random_val[rand() % (sizeof(random_val) - 1)];
		printf("%c", n);
	}

	return (0);
}

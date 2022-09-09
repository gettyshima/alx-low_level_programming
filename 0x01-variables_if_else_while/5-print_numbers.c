#include <stdio.h>
/**
  *main - print single digits of base ten start from 0
  *
  *Return: 0 (success)
  */
int main(void)
{
	int num;

	for (num = 0 ; num <= 9; num++)
		printf("%d", num);
	putchar('\n');


	return (0);
}

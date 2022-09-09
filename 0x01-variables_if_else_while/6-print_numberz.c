#include <stdio.h>
/**
  *main - print single digits of base ten start from 0
  *
  *Description - without using the char type and the printf function
  *
  *Return: 0 (success)
  */
int main(void)
{
	int num;

	for (num = 48 ; num <= 57; num++)
		putchar(num);

	putchar('\n');
	return (0);
}

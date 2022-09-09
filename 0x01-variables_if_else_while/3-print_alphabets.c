#include <stdio.h>
/**
  *main - prints uppercase alphabets from A to Z
  *
  *Return: 0 (success)
  */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <=  'Z'; ++ch)
		putchar(ch);
	putchar('\n');

	return (0);
}

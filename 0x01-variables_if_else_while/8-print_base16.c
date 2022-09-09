#include <stdio.h>
/**
  *main - prints all hexadecimal numbers in lowercase
  *
  *Return: 0 (success)
  */
int main(void)
{
	char a, b;

	for (a = 48; a <= 57; a++)
		putchar(a);
	for (b = 97; b <= 102; b++)
		putchar(b);

	putchar('\n');

	return (0);
}

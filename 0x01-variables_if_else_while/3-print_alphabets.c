#include <stdio.h>
/**
  *main - prints lowercase and uppercase alphabets from a to z
  *
  *Return: 0 (success)
  */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; ++a)
	{
		putchar(a);
	}

	for (b = 'A'; b <= 'z'; ++b)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}

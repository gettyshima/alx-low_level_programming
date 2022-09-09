#include <stdio.h>
/**
  *main - prints lowercase alphabets from a to z
  *
  *Return: 0 (success)
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch >= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

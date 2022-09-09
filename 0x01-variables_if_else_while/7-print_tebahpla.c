#include <stdio.h>
/**
  *main - prints the alhabet in revers
  *
  *Return: 0 (success)
  */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; --alpha)
		putchar(alpha);

	putchar('\n');

	return (0);
}
